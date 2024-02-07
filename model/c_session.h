#pragma once

#include <vector>
#include <tensorflow/c/c_api.h>


class CSession {
 public:
  CSession(TF_Graph* graph, TF_Status* s, bool use_XLA = false);
  explicit CSession(TF_Session* session);

  ~CSession();

  void SetInputs(std::vector<std::pair<TF_Operation*, TF_Tensor*>> inputs);
  void SetOutputs(std::initializer_list<TF_Operation*> outputs);
  void SetOutputs(const std::vector<TF_Output>& outputs);
  void SetTargets(std::initializer_list<TF_Operation*> targets);

  void Run(TF_Status* s);

  void CloseAndDelete(TF_Status* s);

  TF_Tensor* output_tensor(int i) { return output_values_[i]; }

  TF_Session* mutable_session() { return session_; }

 private:
  void DeleteInputValues();
  void ResetOutputValues();

  TF_Session* session_;
  std::vector<TF_Output> inputs_;
  std::vector<TF_Tensor*> input_values_;
  std::vector<TF_Output> outputs_;
  std::vector<TF_Tensor*> output_values_;
  std::vector<TF_Operation*> targets_;
};