#include <gtest/gtest.h>


TEST(HelloTest, testEvalateTrue) {
 
  EXPECT_EQ(6, 3*2);
}

TEST(HelloTest, testEvalatefalse) {
 
  EXPECT_EQ(7, 3*2);
}