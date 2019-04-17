//
// Created by 93725 on 2019/4/17.
//
#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"

BinTree createBinTree(){
    char ch;
    scanf("%c", &ch);
    if(ch == ' '){
        return NULL;
    } else{
        BinTree root = (BinTree)malloc(sizeof(BinNode));
        root->data = ch;
        root->left = createBinTree();
        root->right = createBinTree();
        return root;
    }
}

void preOrderTraverse(BinTree tree){
    if(tree != NULL){
        printf("%c\n", tree->data);
        preOrderTraverse(tree->left);
        preOrderTraverse(tree->right);
    }
}

void inOrderTraverse(BinTree tree){
    if(tree != NULL){
        inOrderTraverse(tree->left);
        printf("%c\n", tree->data);
        inOrderTraverse(tree->right);
    }
}

void postOrderTraverse(BinTree tree){
    if(tree != NULL){
        postOrderTraverse(tree->left);
        postOrderTraverse(tree->right);
        printf("%c\n", tree->data);
    }
}
