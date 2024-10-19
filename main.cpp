// #include <gtest/gtest.h>
#include <vector>
#include <iostream>
#include "cartesianTree.hpp"

// example
// TEST(Tree, Wikipedia) {
//   std::vector<int> arr = {9,3,7,1,8,12,10,20,15,18,5};
//   treeNode treeTop = constructRecTree(arr);
//   EXPECT_EQ(sleepingDominoes(arr), arr); // fix naming
// }


// int main(int argc, char* argv[]) {
//   ::testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }

int main() {
    std::vector<int> arr = {3, 2, 1, 6, 0, 5};
    treeNode* root = constructRecTree(arr);

    std::vector<int> result = treeToVector(root);
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}