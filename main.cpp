#include <vector>
#include <iostream>
#include "cartesianTree.hpp"

void testTree(std::vector<int> arr){
    treeNode* root = constructRecTree(arr);
    
    std::cout << "Original tree:";
    std::cout << std::endl;

    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Returning the cartesian tree back to a vec:";
    std::cout << std::endl;

    std::vector<int> result = treeToVector(root);
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> arr = {3, 2, 1, 6, 0, 5};
    testTree(arr);


    return 0;
}