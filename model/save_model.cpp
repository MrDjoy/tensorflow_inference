#include "model/tensor_util.h"

#include <tensorflow/cc/saved_model/loader.h>
#include <tensorflow/core/lib/io/path.h>
#include <tensorflow/cc/saved_model/tag_constants.h>
#include <tensorflow/cc/saved_model/signature_constants.h>
#include "tensorflow/core/example/example.pb.h"


using namespace tensorflow;
using namespace std;
using namespace tftest;

constexpr char kTestDataPbTxt[] =
    "cc/saved_model/testdata/half_plus_two_pbtxt/00000123";

string MakeSerializedExample(float x) {
    tensorflow::Example example;
    auto* feature_map = example.mutable_features()->mutable_feature();
    (*feature_map)["x"].mutable_float_list()->add_value(x);
    return example.SerializeAsString();
  }

void printTensor(const vector<Tensor> &input) {
      	int cnt = 0;
	for(auto &t : input){
		int values = 1;
		std::ostringstream os; 
		os << "[";
		int num_dimensions = t.shape().dims();
		for(int ii_dim=0; ii_dim<num_dimensions; ii_dim++) {
			os << t.shape().dim_size(ii_dim) << ",";
			values *= t.shape().dim_size(ii_dim);
		}
		os << "]";
		
		std::cout << cnt << ":" << " shape:" << os.str().c_str() << " detail:"<< t.DebugString(values).c_str() << std::endl;
		cnt ++;
	}
}

void printTensor(initializer_list<Tensor> input) {
      	int cnt = 0;
	for(const auto t : input){
		int values = 1;
		std::ostringstream os; 
		os << "[";
		int num_dimensions = t.shape().dims();
		for(int ii_dim=0; ii_dim<num_dimensions; ii_dim++) {
			os << t.shape().dim_size(ii_dim) << ",";
			values *= t.shape().dim_size(ii_dim);
		}
		os << "]";
		
		std::cout << cnt << ":" << " shape:" << os.str().c_str() << " detail:"<< t.DebugString(values).c_str() << std::endl;
		cnt ++;
	}
}

int main (int argc, char** argv) {

    SavedModelBundle bundle;
    SessionOptions session_options;
    RunOptions run_options;

    const char* model_dir = getenv("MODEL_DIR");
    if (!model_dir || model_dir[0] == '\0') {
        model_dir = "tensorflow";
    }
    const std::string model_path = io::JoinPath(model_dir, "testdata/half_plus_two_pbtxt/00000123");
    std::cout << "Loading model from: " << model_path << std::endl;
    Status status = LoadSavedModel(session_options, run_options, model_path, {kSavedModelTagServe}, &bundle);
    if (!status.ok()) {
        std::cout << status.ToString() << std::endl;
    }

    // ValidateAssets(export_dir, bundle);
    // print bundle.meta_graph_def
    std::cout << bundle.meta_graph_def.DebugString() << std::endl;


    // Retrieve the regression signature from meta graph def.
    const auto signature_def_map = bundle.meta_graph_def.signature_def();
    const auto signature_def = signature_def_map.at("regress_x_to_y");

    const string input_name = signature_def.inputs().at(kRegressInputs).name();
    const string output_name =
        signature_def.outputs().at(kRegressOutputs).name();

    std::vector<tstring> serialized_examples;
    for (float x : {0, 1, 2, 3}) {
      serialized_examples.push_back(MakeSerializedExample(x));
    }

    // Validate the half plus two behavior.
    Tensor input = AsTensor<tstring>(serialized_examples, TensorShape({4}));
    std::cout << "Input: " << input.DebugString() << std::endl;
    printTensor({input});

    // Run the regressor to get a prediction.
    std::vector<Tensor> outputs;
    status = bundle.session->Run({{input_name, input}}, {output_name}, {}, &outputs);
    if (status.ok()) {
      std::cout << "Outputs: ";
      for (const auto& output : outputs) {
        std::cout << output.DebugString() << std::endl;
      }
    } else {
      std::cout << status.ToString() << std::endl;
    }

    ExpectTensorEqual<float>(
        outputs[0],
        AsTensor<float>({2, 2.5, 3, 3.5}, TensorShape({4, 1})));
}