#include "model/c_session.h"

#include <iostream>
#include <tensorflow/c/c_api_experimental.h>



CSession::CSession(TF_Graph* graph, TF_Status* s, bool use_XLA) {
  TF_SessionOptions* opts = TF_NewSessionOptions();
  //TF_EnableXLACompilation(opts, use_XLA);
  session_ = TF_NewSession(graph, opts, s);
  TF_DeleteSessionOptions(opts);
}

CSession::CSession(TF_Session* session) : session_(session) {}

CSession::~CSession() {
  TF_Status* s = TF_NewStatus();
  CloseAndDelete(s);
  //EXPECT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
  TF_DeleteStatus(s);
}

void CSession::SetInputs(
    std::vector<std::pair<TF_Operation*, TF_Tensor*>> inputs) {
  DeleteInputValues();
  inputs_.clear();
  for (const auto& p : inputs) {
    inputs_.emplace_back(TF_Output{p.first, 0});
    input_values_.emplace_back(p.second);
  }
}

void CSession::SetOutputs(std::initializer_list<TF_Operation*> outputs) {
  ResetOutputValues();
  outputs_.clear();
  for (TF_Operation* o : outputs) {
    outputs_.emplace_back(TF_Output{o, 0});
  }
  output_values_.resize(outputs_.size());
}

void CSession::SetOutputs(const std::vector<TF_Output>& outputs) {
  ResetOutputValues();
  outputs_ = outputs;
  output_values_.resize(outputs_.size());
}

void CSession::SetTargets(std::initializer_list<TF_Operation*> targets) {
  targets_.clear();
  for (TF_Operation* t : targets) {
    targets_.emplace_back(t);
  }
}

void CSession::Run(TF_Status* s) {
  if (inputs_.size() != input_values_.size()) {
    std::cout << "Call SetInputs() before Run()";
    return;
  }
  ResetOutputValues();
  output_values_.resize(outputs_.size(), nullptr);

  const TF_Output* inputs_ptr = inputs_.empty() ? nullptr : &inputs_[0];
  TF_Tensor* const* input_values_ptr =
      input_values_.empty() ? nullptr : &input_values_[0];

  const TF_Output* outputs_ptr = outputs_.empty() ? nullptr : &outputs_[0];
  TF_Tensor** output_values_ptr =
      output_values_.empty() ? nullptr : &output_values_[0];

  TF_Operation* const* targets_ptr = targets_.empty() ? nullptr : &targets_[0];

  TF_SessionRun(session_, nullptr, inputs_ptr, input_values_ptr, inputs_.size(),
                outputs_ptr, output_values_ptr, outputs_.size(), targets_ptr,
                targets_.size(), nullptr, s);

  DeleteInputValues();
}

void CSession::CloseAndDelete(TF_Status* s) {
  DeleteInputValues();
  ResetOutputValues();
  if (session_ != nullptr) {
    TF_CloseSession(session_, s);
    //EXPECT_EQ(TF_OK, TF_GetCode(s)) << TF_Message(s);
    TF_DeleteSession(session_, s);
    session_ = nullptr;
  }
}

void CSession::DeleteInputValues() {
  for (size_t i = 0; i < input_values_.size(); ++i) {
    TF_DeleteTensor(input_values_[i]);
  }
  input_values_.clear();
}

void CSession::ResetOutputValues() {
  for (size_t i = 0; i < output_values_.size(); ++i) {
    if (output_values_[i] != nullptr) TF_DeleteTensor(output_values_[i]);
  }
  output_values_.clear();
}
