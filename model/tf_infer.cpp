#include "model/c_session.h"

#include <iostream>
#include <string>
#include <tensorflow/c/c_api.h>
#include <tensorflow/core/framework/types.h>


using namespace tensorflow;
using namespace std;

void log(TF_Status* s) {
    std::cout << "code: " << TF_GetCode(s) << TF_Message(s) << std::endl;
}

void PlaceholderHelper(TF_Graph* graph, TF_Status* s, const char* name,
                       TF_DataType dtype, const std::vector<int64_t>& dims,
                       TF_Operation** op) {
  TF_OperationDescription* desc = TF_NewOperation(graph, "Placeholder", name);
  TF_SetAttrType(desc, "dtype", dtype);
  if (!dims.empty()) {
    TF_SetAttrShape(desc, "shape", dims.data(), dims.size());
  }
  *op = TF_FinishOperation(desc, s);
  log(s);
}

typedef std::unique_ptr<TF_Tensor, decltype(&TF_DeleteTensor)>
    unique_tensor_ptr;

static void Int32Deallocator(void* data, size_t, void* arg) {
  delete[] static_cast<int32_t*>(data);
}


TF_Tensor* Int32Tensor(const int64_t* dims, int num_dims,
                       const int32_t* values) {
  int64_t num_values = 1;
  for (int i = 0; i < num_dims; ++i) {
    num_values *= dims[i];
  }
  TF_Tensor* t =
      TF_AllocateTensor(TF_INT32, dims, num_dims, sizeof(int32_t) * num_values);
  memcpy(TF_TensorData(t), values, sizeof(int32_t) * num_values);
  return t;
}

TF_Tensor* Int32Tensor(const std::vector<int32_t>& values) {
  int64_t dims = values.size();
  return Int32Tensor(&dims, 1, values.data());
}

TF_Tensor* Int32Tensor(int32_t v) {
  const int num_bytes = sizeof(int32_t);
  int32_t* values = new int32_t[1];
  values[0] = v;
  return TF_NewTensor(TF_INT32, nullptr, 0, values, num_bytes,
                      &Int32Deallocator, nullptr);
}

void ConstHelper(TF_Tensor* t, TF_Graph* graph, TF_Status* s, const char* name,
                 TF_Operation** op) {
  TF_OperationDescription* desc = TF_NewOperation(graph, "Const", name);
  TF_SetAttrTensor(desc, "value", t, s);
  log(s);
  TF_SetAttrType(desc, "dtype", TF_TensorType(t));
  *op = TF_FinishOperation(desc, s);
  log(s);
}

TF_Operation* Const(TF_Tensor* t, TF_Graph* graph, TF_Status* s,
                    const char* name) {
  TF_Operation* op;
  ConstHelper(t, graph, s, name, &op);
  return op;
}
TF_Operation* ScalarConst(int32_t v, TF_Graph* graph, TF_Status* s,
                          const char* name = "scalar") {
  unique_tensor_ptr tensor(Int32Tensor(v), TF_DeleteTensor);
  return Const(tensor.get(), graph, s, name);
}


TF_Operation* Placeholder(TF_Graph* graph, TF_Status* s, 
                         const char* name = "feed",
                         TF_DataType dtype = TF_INT32,
                         const std::vector<int64_t>& dims = {}) {
    TF_Operation* op;
    PlaceholderHelper(graph, s, name, dtype, dims, &op);
    return op;
}

void BinaryOpHelper(const char* op_name, TF_Operation* l, TF_Operation* r,
                    TF_Graph* graph, TF_Status* s, const char* name,
                    TF_Operation** op, const string& op_device, bool check) {
  TF_OperationDescription* desc = TF_NewOperation(graph, op_name, name);
  if (!op_device.empty()) {
    TF_SetDevice(desc, op_device.c_str());
  }
  TF_AddInput(desc, {l, 0});
  TF_AddInput(desc, {r, 0});
  *op = TF_FinishOperation(desc, s);
  if (check) {
    log(s);
    //ASSERT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    //ASSERT_NE(*op, nullptr);
  }
}


TF_Operation* MinWithDevice(TF_Operation* l, TF_Operation* r, TF_Graph* graph,
                            const string& op_device, TF_Status* s,
                            const char* name = "min") {
  TF_Operation* op;
  BinaryOpHelper("Min", l, r, graph, s, name, &op, op_device, true);
  return op;
}


void RunGraph(const std::string & device, bool use_XLA) {
    TF_Status* s = TF_NewStatus();
    TF_Graph* graph = TF_NewGraph();
    
    TF_Operation* feed = Placeholder(graph, s);
    log(s);
    
    TF_Operation* one = ScalarConst(0, graph, s);
    log(s);
     
    CSession csession(graph, s, use_XLA);
    log(s);
    
    if (!device.empty()) {
         std::cout << "set device:" << device;
    }
    
    TF_Operation* min = MinWithDevice(feed, one, graph, device, s);
    // ASSERT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s); 
    csession.SetInputs({{feed, Int32Tensor({3, 2, 5})}});
    csession.SetOutputs({min});
    csession.Run(s);
    //ASSERT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    TF_Tensor* out = csession.output_tensor(0);
    std::cout << TF_TensorType(out) << " dim:" << TF_NumDims(out) 
              << " size:" << TF_TensorByteSize(out) << " value:" << static_cast<int32*>(TF_TensorData(out)) << std::endl;

    // Clean up
    csession.CloseAndDelete(s);
    //ASSERT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    TF_DeleteGraph(graph);
    TF_DeleteStatus(s);    
    
} 

std::string GPUDeviceName(TF_Session* session) {
  std::unique_ptr<TF_Status, decltype(&TF_DeleteStatus)> status(
      TF_NewStatus(), TF_DeleteStatus);
  TF_Status* s = status.get();
  std::unique_ptr<TF_DeviceList, decltype(&TF_DeleteDeviceList)> list(
      TF_SessionListDevices(session, s), TF_DeleteDeviceList);
  TF_DeviceList* device_list = list.get();

  //CHECK_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);

  const int num_devices = TF_DeviceListCount(device_list);
  std::cout << "There are " << num_devices << " devices." << std::endl;
  for (int i = 0; i < num_devices; ++i) {
    const char* device_name = TF_DeviceListName(device_list, i, s);
    //CHECK_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    const char* device_type = TF_DeviceListType(device_list, i, s);
    //CHECK_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    std::cout << "Device " << i << " has name " << device_name << ", type "
              << device_type << std::endl;
    if (string(device_type) == DEVICE_GPU) {
      return device_name;
    }
  }
  // No GPU device found.
  return "";
}


std::string GPUDeviceName() {
  std::unique_ptr<TF_Status, decltype(&TF_DeleteStatus)> status(
      TF_NewStatus(), TF_DeleteStatus);
  TF_Status* s = status.get();
  std::unique_ptr<TF_Graph, decltype(&TF_DeleteGraph)> graph(TF_NewGraph(),
                                                             TF_DeleteGraph);

  TF_SessionOptions* opts = TF_NewSessionOptions();
  TF_Session* sess = TF_NewSession(graph.get(), opts, s);
  TF_DeleteSessionOptions(opts);

  const std::string gpu_device_name = GPUDeviceName(sess);
  TF_DeleteSession(sess, s);
  //CHECK_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
  return gpu_device_name;
}

int main(int argc, char *argv[]) {

    std::cout << TF_Version() << std::endl;
    
    const std::string gpu_device = GPUDeviceName();    
    RunGraph(gpu_device, false);
    return 0;

}