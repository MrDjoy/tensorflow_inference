genrule(
    name = 'tf_cc_so',
    srcs = glob(['lib/libtensorflow_cc.so.*']),
    outs = ['lib/libtensorflow_cc.so'],
    cmd = "cat $(SRCS) > $(@)",
)
genrule(
    name = 'tf_framework_so',
    srcs = glob(['lib/libtensorflow_framework.so.*']),
    outs = ['lib/libtensorflow_framework.so'],
    cmd = "cat $(SRCS) > $(@)",
)

cc_library(
  name = "tensorflow-1.15",
  hdrs = glob(["include/**"], exclude=["include/**/*.so"]),
  srcs = [':tf_cc_so', ':tf_framework_so'],
  linkstatic = 1,
  visibility = ["//visibility:public"],
  licenses = ["notice"],
)