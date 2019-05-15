//
// Created by Administrator on 2019/5/15.
//

#ifndef WORKPLACE_CLION_BINARYSEARCHTREE_H
#define WORKPLACE_CLION_BINARYSEARCHTREE_H
#include <stdlib.h>
#include <stdio.h>
typedef struct TreeNode  *BinarySearchTree;
typedef struct TreeNode  *Position;
struct TreeNode{
    int data;
    BinarySearchTree left;
    BinarySearchTree right;
};

BinarySearchTree makeEmpty(BinarySearchTree tree);
Position find(int key, BinarySearchTree tree);
Position findMin(BinarySearchTree tree);
Position findMax(BinarySearchTree tree);
BinarySearchTree insert(int value, BinarySearchTree tree);
BinarySearchTree delete(int value, BinarySearchTree tree);


#endif //WORKPLACE_CLION_BINARYSEARCHTREE_H
