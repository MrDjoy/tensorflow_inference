workspace(name = "tensorflow_infer")


load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


http_archive(
    name = "bazel_skylib",
    sha256 = "2ef429f5d7ce7111263289644d233707dba35e39696377ebab8b0bc701f7818e",
    urls = ["https://yysdkoss.oss-cn-shenzhen.aliyuncs.com/sdk_management/yylive-recommended/bazel-skylib/0.8.0/bazel-skylib.0.8.0.tar.gz"],
)  # https://github.com/bazelbuild/bazel-skylib/releases


http_archive(
    name = "io_bazel_rules_closure",
    sha256 = "5b00383d08dd71f28503736db0500b6fb4dda47489ff5fc6bed42557c07c6ba9",
    strip_prefix = "rules_closure-308b05b2419edb5c8ee0471b67a40403df940149",
    urls = [
        "https://storage.googleapis.com/mirror.tensorflow.org/github.com/bazelbuild/rules_closure/archive/308b05b2419edb5c8ee0471b67a40403df940149.tar.gz"
       # "https://github.com/bazelbuild/rules_closure/archive/308b05b2419edb5c8ee0471b67a40403df940149.tar.gz",  # 2019-06-13
    ],
)

http_archive(
    name = "com_google_protobuf",
    sha256 = "b41b51a91b24588c18bf73e157f0b34a3a0c459b36a6e5fc6f4094cc2171673d",
    strip_prefix = "protobuf-310ba5ee72661c081129eb878c1bbcec936b20f0",
        urls = ["https://yysdkoss.oss-cn-shenzhen.aliyuncs.com/sdk_management/yylive-recommended/protobuf/3.8/310ba5ee72661c081129eb878c1bbcec936b20f0.tar.gz"],
)