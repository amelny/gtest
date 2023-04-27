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