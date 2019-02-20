cc_test(
    name = "example_test",
    srcs = ["simple.cpp"],
    data = [":testdata"],
    deps = ["@googletest//:gtest_main",]
)

filegroup(
    name = "testdata",
    srcs = ["example.txt"]
)