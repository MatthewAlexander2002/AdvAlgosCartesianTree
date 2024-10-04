#include <gtest/gtest.h>
#include <vector>
#include "cartesianTree.hpp"

example
TEST(Tree, Wikipedia) {
  std::vector<int> arr = {9,3,7,1,8,12,10,20,15,18,5};
  treeNodeR treeTop = constructRecTree(arr);
  EXPECT_EQ(sleepingDominoes(arr), arr); // fix naming
}


int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}