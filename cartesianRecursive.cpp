#include <vector>
#include "cartesianTree.hpp"

treeNodeR constructRecTree(const std::vector<int>& arr){
    treeNodeR root;
    int minValIndex = minValIndex(arr);

    root.val = arr[minValIndex];
    root.left = cartRec(root, arr[0, maxValIndex-1]);
    root.right = cartRec(root, arr[maxValIndex+1, arr.size()-1]);

    return root;
}

treeNodeR cartRec(treeNodeR root, const std::vector<int>& arr){
    if(arr.size() == 0){
        return nullptr;
    }

    int maxValIndex = maxValIndex(arr);
    treeNodeR newNode;
    newNode.val = arr[maxValIndex];
    newNode.left = cartRec(newNode, arr[0, maxValIndex-1]);
    newNode.right = cartRec(newNode, arr[maxValIndex+1, arr.size()]);

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

int minValIndex(const std::vector<int>& arr){
    minVal = arr.begin();
    minValIndex = 0;

    for(int i = 0; i < arr.size(); i++){
        if(minVal < arr[i]){
            minVal = arr[i];
            minValIndex = i;
        }
    }
    return i;
}