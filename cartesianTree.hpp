#ifndef CARTESIANTREE_HPP_
#define CARTESIANTREE_HPP_

#include <vector>

struct treeNodeR {
    int val;
    treeNodeR* left;
    treeNodeR* right;

    treeNodeR(const std::vector<int>& arr);

    void insert(int val);

    void printInOrder();
};

struct treeNodeL {
    int val;
    treeNodeL* parent; 
    treeNodeL* left;
    treeNodeL* right;

    treeNodeL(const std::vector<int>& arr);

    void insert(int val);

    void printInOrder();
};

#endif