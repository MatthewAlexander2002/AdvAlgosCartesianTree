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
treeNode* cartRec(treeNode* root, const std::vector<int>& arr);
int MinValIndex(const std::vector<int>& arr);

// struct treeNodeR {
//     int val;
//     treeNodeR* left;
//     treeNodeR* right;

//     treeNodeR() : val(0), left(nullptr), right(nullptr) {}

//     treeNodeR(const std::vector<int>& arr);

//     void insert(int val);

//     void printInOrder();
// };

// struct treeNodeL {
//     int val;
//     treeNodeL* parent; 
//     treeNodeL* left;
//     treeNodeL* right;

//     treeNodeL(const std::vector<int>& arr);

//     void insert(int val);

//     void printInOrder();
// };

#endif