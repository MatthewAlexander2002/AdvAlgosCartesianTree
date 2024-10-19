#include <vector>
#include "cartesianTree.hpp"

treeNodeR constructRecTree(const std::vector<int>& arr){
    if (arr.empty()) {
        return nullptr;
    }

    int minValIndex = MinValIndex(arr);
    treeNodeR* root = new treeNodeR();
    root->val = arr[minValIndex];

    std::vector<int> leftArr(arr.begin(), arr.begin() + minValIndex);
    std::vector<int> rightArr(arr.begin() + minValIndex + 1, arr.end());

    root->left = cartRec(root, leftArr);
    root->right = cartRec(root, rightArr);

    return root;
}

treeNodeR cartRec(treeNodeR root, const std::vector<int>& arr){
    if(arr.size() == 0){
        return nullptr;
    }

    int minValIndex = MinValIndex(arr);
    treeNodeR newNode = new treeNodeR();
    newNode->val = arr[minValIndex];

    std::vector<int> leftArr(arr.begin(), arr.begin() + minValIndex);
    std::vector<int> rightArr(arr.begin() + minValIndex + 1, arr.end());

    newNode->left = cartRec(newNode, leftArr);
    newNode->right = cartRec(newNode, rightArr);

    return newNode;
}

// treeNodeR constructRecTree(const std::vector<int>& arr) {
//     treeNodeR root;
//     maxValIndex = maxValIndex(arr);
//     root.val(arr[maxValIndex]);
//     root.left(root, cartRec(arr[0,maxValIndex-1])); //need to check for edge cases i.e. 0, 1, 2 arr.size(), etc, 
//     //might need to construct the vector before passing it
//     root.right(cartesianTree(root, arr[maxValIndex, arr.size()-1])); //need to check for edge cases
// }
//IM NOT CONSTRUCTING ETHER OF THESE CORRECTLY IM STILL CONSTRUCTING ON GREATER THAN LESS THAN RATHER THAN INDEX
// treeNodeR cartRec(treeNodeR root, const std::vector<int>& arr) {
//     maxValIndex = maxValIndex(arr);
//     treeNodeR newRoot;
//     // if(root.val == arr[maxValIndex]){
//     //     root.left = nullptr;
//     //     newRoot = treeNodeR(arr[maxValIndex], nullptr, nullptr);
//     //     root.right = newRoot
//     // }
//     if (root.val > arr[maxValIndex]){
//         newRoot = treeNodeR(arr[maxValIndex], nullptr, nullptr);
//         root.left = newRoot
//         root.right = nullptr;
//     } else { //handle both < and == , they both end up doing the same operation
//         root.left = nullptr;
//         newRoot = treeNodeR(arr[maxValIndex], nullptr, nullptr);
//         root.right = newRoot
//     }
//     //copy of arr from 0, index and index to size
//     cartRec(newRoot, )
//     return newRoot;
// }

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