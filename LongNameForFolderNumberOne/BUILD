cc_test(
    name = "example_test",
    srcs = ["reading_test.cpp"],
    data = [":testdata"],
    deps = ["@googletest//:gtest_main",]
)

filegroup(
    name = "testdata",
    srcs = ["example.txt"]
)