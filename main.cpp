#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include "cartesianTree.hpp"
#include <bits/stl_numeric.h>

int treeWidth(treeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftWidth = treeWidth(root->left);
    int rightWidth = treeWidth(root->right);
    return 1 + leftWidth + rightWidth;
}

// Function to calculate the height of the tree
int treeHeight(treeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + std::max(treeHeight(root->left), treeHeight(root->right));
}

// Helper function to print spaces for alignment
void printSpaces(int count) {
    for (int i = 0; i < count; i++) {
        std::cout << " ";
    }
}

// Recursive function to print the tree
void printTreeHelper(treeNode* root, int depth, int offset, int totalWidth) {
    if (root == nullptr) {
        return;
    }

    // Calculate the position for the current node
    int nodePosition = offset + totalWidth / 2;

    // Print leading spaces to position the current node
    printSpaces(nodePosition);
    std::cout << root->val << std::endl;

    // Recursively print left and right children with adjusted positions
    if (root->left) {
        printTreeHelper(root->left, depth + 1, offset, totalWidth / 2);
    }
    if (root->right) {
        printTreeHelper(root->right, depth + 1, offset + totalWidth / 2, totalWidth / 2);
    }
}

// Main function to print the tree in a centered format
void printCenteredTree(treeNode* root) {
    int width = treeWidth(root) * 4;  // Adjust the multiplier for proper spacing
    printTreeHelper(root, 0, 0, width);
}

treeNode* testTree(std::vector<int> arr){
    treeNode* root = constructRecTree(arr);
    
    std::cout << "Original vec:";
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
    std::cout << "Test case 7: {9, 3, 7, 1, 8, 12, 10, 20, 15, 18, 5}" << std::endl;
    auto testWiki = testTree(arr7);
    std::cout << std::endl;
    
    std::cout << "Cartesian Tree Structure:" << std::endl;
    printCenteredTree(testWiki);
    std::cout << std::endl;

    // Additional test case 8: Alternating high-low pattern
    std::vector<int> arr8 = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    std::cout << "Test case 8: {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}" << std::endl;
    testTree(arr8);
    std::cout << std::endl;

    // Additional test case 9: Large dataset
    std::vector<int> arr9(100);
    std::iota(arr9.begin(), arr9.end(), 1);  // Fill arr9 with values from 1 to 100
    std::cout << "Test case 9: Large dataset from 1 to 100" << std::endl;
    testTree(arr9);
    std::cout << std::endl;

    // Additional test case 10: Single max element in the middle
    std::vector<int> arr10 = {1, 2, 3, 100, 3, 2, 1};
    std::cout << "Test case 10: {1, 2, 3, 100, 3, 2, 1}" << std::endl;
    testTree(arr10);
    std::cout << std::endl;

    // Additional test case 11: Duplicates and random order
    std::vector<int> arr11 = {5, 1, 9, 1, 5, 9, 3, 3, 7, 7, 5};
    std::cout << "Test case 11: {5, 1, 9, 1, 5, 9, 3, 3, 7, 7, 5}" << std::endl;
    testTree(arr11);
    std::cout << std::endl;

    // Additional test case 12: All zeroes
    std::vector<int> arr12 = {0, 0, 0, 0, 0, 0};
    std::cout << "Test case 12: {0, 0, 0, 0, 0, 0}" << std::endl;
    testTree(arr12);
    std::cout << std::endl;

    // Additional test case 13: Zigzag pattern
    std::vector<int> arr13 = {1, 3, 2, 5, 4, 7, 6};
    std::cout << "Test case 13: {1, 3, 2, 5, 4, 7, 6}" << std::endl;
    testTree(arr13);
    std::cout << std::endl;

    return 0;
}
