#include <vector>
#include "cartesianTree.hpp"

//constructs the root node for the tree
treeNode* constructRecTree(const std::vector<int>& arr){
    if (arr.empty()) {
        return nullptr;
    }

    int minValIndex = MinValIndex(arr);
    treeNode* root = new treeNode(arr[minValIndex]);

    std::vector<int> leftArr(arr.begin(), arr.begin() + minValIndex);
    std::vector<int> rightArr(arr.begin() + minValIndex + 1, arr.end());

    root->left = cartRec(root, leftArr);
    root->right = cartRec(root, rightArr);

    return root;
}

//recursively constructs the nodes of the tree
treeNode* cartRec(treeNode* root, const std::vector<int>& arr){
    if(arr.size() == 0){
        return nullptr;
    }

    int minValIndex = MinValIndex(arr);
    treeNode* newNode = new treeNode(arr[minValIndex]);

    std::vector<int> leftArr(arr.begin(), arr.begin() + minValIndex);
    std::vector<int> rightArr(arr.begin() + minValIndex + 1, arr.end());

    newNode->left = cartRec(newNode, leftArr);
    newNode->right = cartRec(newNode, rightArr);

    return newNode;
}

//finds the minimum value of a sub array
int MinValIndex(const std::vector<int>& arr){
    if (arr.empty()) {
        return -1; 
    }

    int minValIndex = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < arr[minValIndex]){
            minValIndex = i;
        }
    }
    return minValIndex;
}

//recursively finds the all of the elements to reconstruct the array
void treeToVectorHelper(treeNode* root, std::vector<int>& result) {
    if (root == nullptr) {
        return;
    }
    treeToVectorHelper(root->left, result);
    result.push_back(root->val);
    treeToVectorHelper(root->right, result);
}

std::vector<int> treeToVector(treeNode* root) {
    std::vector<int> result;
    treeToVectorHelper(root, result);
    return result;
}