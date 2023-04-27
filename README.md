# gtest
Simplest gtest exmple with conan2
#Intro

gtest (Google Test) is a popular C++ testing framework developed by Google. It provides a comprehensive set of tools for writing automated tests for C++ code, including assertions, test fixtures, and test suites.

Here's an example of how to write a simple gtest test case:
```
#include <gtest/gtest.h>

// Define a test case
TEST(MyTestCase, MyTestName) {
  EXPECT_EQ(2 + 2, 4);
}

// Define another test case
TEST(MyTestCase, MyOtherTestName) {
  EXPECT_TRUE(true);
}

// Define the main function to run all tests
int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
```

In this example, we define two test cases: MyTestName and MyOtherTestName. Each test case is defined using the TEST macro, which takes two arguments: the name of the test suite and the name of the test case.

Within each test case, we use EXPECT_* macros to define assertions. In the first test case, we use EXPECT_EQ to assert that the expression 2 + 2 is equal to 4. In the second test case, we use EXPECT_TRUE to assert that the expression true is true.

Finally, we define the main function to run all tests. We use the testing::InitGoogleTest function to initialize the gtest framework, and the RUN_ALL_TESTS macro to run all tests.

When we run this code, gtest will automatically discover and run all test cases defined in the code. If a test case fails, gtest will report the failure and provide detailed information about what went wrong.


# Installing conan2

# clone folder name matters, to avoid imports issues
$ git clone https://github.com/conan-io/conan.git conan_src
$ cd conan_src
$ git fetch --all
$ git checkout -b develop2 origin/develop2
$ python -m pip install -e .

# Use this repository

clone repository

run `run_example.sh`


