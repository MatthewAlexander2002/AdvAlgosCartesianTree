#ifndef CARTESIANTREE_HPP_
#define CARTESIANTREE_HPP_

#include <vector>

struct treeNode {
    int val;
    treeNode* left;
    treeNode* right;

    // Constructor
    treeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

treeNode* constructRecTree(const std::vector<int>& arr);
treeNode* cartRec(const std::vector<int>& arr);
int MinValIndex(const std::vector<int>& arr);
std::vector<int> treeToVector(treeNode* root);

#endif