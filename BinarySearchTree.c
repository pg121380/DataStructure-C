//
// Created by Administrator on 2019/5/15.
//

#include "BinarySearchTree.h"
BinarySearchTree makeEmpty(BinarySearchTree tree){
    while(tree){
        makeEmpty(tree -> left);
        makeEmpty(tree ->right);
        free(tree);
    }
    return NULL;
}
Position find(int key, BinarySearchTree tree){
    if(!tree)
        return NULL;
    if(key < tree -> data)
        return find(key, tree -> left);
    else if (key > tree -> data)
        return find(key, tree -> right);
    else
        return tree;
}
Position findMin(BinarySearchTree tree){
    if(!tree)
        return NULL;
    else if(!tree -> left)
        return tree;
    else
        findMin(tree -> left);
}
Position findMax(BinarySearchTree tree){
    if(!tree)
        return NULL;
    else if(!tree -> right)
        return tree;
    else
        findMax(tree -> right);
}
BinarySearchTree insert(int value, BinarySearchTree tree){
    if(!tree){
        tree = (BinarySearchTree)malloc(sizeof(struct TreeNode));
        tree -> data = value;
        tree -> left = tree -> right = NULL;
    } else {
        if(value > tree -> data)
            tree -> right = insert(value, tree -> right);
        else if(value < tree -> data)
            tree -> left = insert(value, tree -> left);
    }
    return tree;
}
BinarySearchTree delete(int value, BinarySearchTree tree){
    BinarySearchTree temp;
    if(!tree)
        printf("Not found!\n");
    else if (value < tree -> data)
        return delete(value, tree -> left);
    else if (value > tree -> data)
        return delete(value, tree -> right);

    else
        if(tree -> left && tree -> right){
            temp = findMin(tree -> right);
            tree -> data = temp -> data;
            delete(tree -> data, tree -> right);
        } else {
            temp = tree;
            if(!tree -> left){
                tree = tree -> left;
            } else if(!tree -> right){
                tree = tree -> right;
            }
            free(temp);
        }
    return tree;
}
