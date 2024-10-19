#include <vector>
#include "cartesianTree.hpp"

treeNodeL cartLin(treeNodeL root, const std::vector<int>& arr){ //takes in the starting node and the array
    treeNodeL leftMostNode;
    leftMostNode.val = arr.begin();
    treeNodeL* mostRecentNode;
    for(int i = 1; i < arr.size(); i++){
        treeNodeL newNode;
        if(arr[i] == arr[i-1]){
            newNode.val = arr[i];
            newNode.left = nullptr;
            newNode.right = nullptr;
            mostRecentNode.right = newNode;
        } else if(arr[i] < arr[i-1]){
            newNode.val = arr[i];
            newNode.left = nullptr;
            newNode.right = nullptr;
            //insertion function basically go up the tree until you find the node above you to be smaller and the node below to be bigger | now that i think about it you kinda of need this to go either way
        } else if(arr[i] > arr[i-1]){
            newNode.val = arr[i];
            newNode.left = nullptr;
            newNode.right = nullptr;
            mostRecentNode.right = newNode;
        }

        mostRecentNode = newNode; // fix pointer
    }


    return leftMostNode;
}

void insertion(treeNodeL mostRecentNode, treeNodeL newNode){
    //
}

//thinking:
//if the node is less than it become the parent if it is greater than it becomes the child
//nodes are always placed on the right or repositioned to the left (>)


//curr val == next val : case for < occurs 
//curr val > next val : curr is a child : go up the tree until the next val has no smaller nodes below it and no larger nodes above it, if its is the smallest node it becomes the root if not the node above its right child is next val and the one below becomes next's left child
//curr val < next val : curr is the parent : right of curr val (this will be updated into the right pos as the above case occurs)