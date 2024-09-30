#include <gtest/gtest.h>
#include <vector>
#include "cartesianTree.hpp"

//example
// TEST(Dominoes, size1) {
//   std::vector<int> coordinates = {3};
//   std::vector<int> heights = {10};
//   EXPECT_EQ(sleepingDominoes(coordinates, heights), 1);
// }


int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}