#include <vector>
#include <iostream>
#include "cartesianTree.hpp"

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