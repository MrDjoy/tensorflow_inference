MODEL_DIR=`pwd`/model
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`/third_party/tensorflow-1.15/lib
/usr/local/bazel3/bin/bazel build --config=opt model_inference