#include <vector>
#include <iostream>
#include <iomanip>
#include "cartesianTree.hpp"

void printTree(treeNode* root, int indent = 0) {
    if (root == nullptr) {
        return;
    }
    
    // Print the right subtree first (for a clearer horizontal structure)
    printTree(root->right, indent + 4);

    // Print the current node
    if (indent) {
        std::cout << std::setw(indent) << ' ';
    }
    std::cout << root->val << std::endl;

    // Print the left subtree
    printTree(root->left, indent + 4);
}

treeNode* testTree(std::vector<int> arr){
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

    return root;
}


int main() {
    // Test case 1: Basic test case
    std::vector<int> arr1 = {3, 2, 1, 6, 0, 5};
    std::cout << "Test case 1: {3, 2, 1, 6, 0, 5}" << std::endl;
    testTree(arr1);
    std::cout << std::endl;

    // Test case 2: Sorted array (increasing)
    std::vector<int> arr2 = {1, 2, 3, 4, 5, 6};
    std::cout << "Test case 2: {1, 2, 3, 4, 5, 6}" << std::endl;
    testTree(arr2);
    std::cout << std::endl;

    // Test case 3: Reverse sorted array (decreasing)
    std::vector<int> arr3 = {6, 5, 4, 3, 2, 1};
    std::cout << "Test case 3: {6, 5, 4, 3, 2, 1}" << std::endl;
    testTree(arr3);
    std::cout << std::endl;

    // Test case 4: All elements are the same
    std::vector<int> arr4 = {4, 4, 4, 4, 4};
    std::cout << "Test case 4: {4, 4, 4, 4, 4}" << std::endl;
    testTree(arr4);
    std::cout << std::endl;

    // Test case 5: Single element
    std::vector<int> arr5 = {7};
    std::cout << "Test case 5: {7}" << std::endl;
    testTree(arr5);
    std::cout << std::endl;

    // Test case 6: Empty array
    std::vector<int> arr6 = {};
    std::cout << "Test case 6: {} (Empty array)" << std::endl;
    testTree(arr6);
    std::cout << std::endl;

    // Test case 7: Wikipedia
    std::vector<int> arr7 = {9, 3, 7, 1, 8, 12, 10, 20, 15, 18, 5};
    std::cout << "Test case 7: {}" << std::endl;
    auto testRoot = testTree(arr7);
    std::cout << std::endl;

    std::cout << "Cartesian Tree Structure:" << std::endl;
    printTree(testRoot);

    return 0;
}