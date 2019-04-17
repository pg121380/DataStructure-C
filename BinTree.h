//
// Created by 93725 on 2019/4/17.
//

#ifndef WORKPLACE_CLION_BINTREE_H
#define WORKPLACE_CLION_BINTREE_H

typedef struct BinNode{
    char data;
    struct BinNode *left, *right;
}BinNode, *BinTree;

BinTree createBinTree();
void preOrderTraverse(BinTree tree);
void inOrderTraverse(BinTree tree);
void postOrderTraverse(BinTree tree);
#endif //WORKPLACE_CLION_BINTREE_H
