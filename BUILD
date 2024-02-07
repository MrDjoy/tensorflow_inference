cc_library(
    name = "c_session",
    srcs = glob(['model/c_session.cpp']),
    hdrs = glob(['model/c_session.h']),
    includes = ['third_party/tensorflow-1.15/include'],
    deps = ['//third_party/tensorflow-1.15'],

)

cc_binary(
    name = "model_inference",
    srcs = glob(['model/tf_infer.cpp',
                 'model/c_session.cpp',
                 'model/c_session.h'
            ]),
    includes = [
              'third_party/tensorflow-1.15/include',
          ],
    deps = [ #':c_session',
             '//third_party/tensorflow-1.15',
           ],
)