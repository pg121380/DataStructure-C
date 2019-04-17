//
// Created by 93725 on 2019/4/17.
//
#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"


typedef struct Node_T{
    BinTree Data;
    struct Node_T *Next;
}Stack;

Stack *CreateStack_T();
int isEmpty_T(Stack* stack);
void Push_T(BinTree item,Stack* stack);
BinTree Pop_T(Stack*);
BinTree getTop_T(Stack *stack);


BinTree createBinTree(){
    BinTree root;
    char ch;
    scanf("%c", &ch);
    if(ch != ' '){
        root = (BinTree)malloc(sizeof(BinNode));
        root->data = ch;
        root->left = createBinTree();
        root->right = createBinTree();
    } else{
        root = NULL;
    }
    return root;
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

void inOrderTraverseWithoutRecurrence(BinTree tree){
    Stack *stack = CreateStack_T();
    BinTree tempTree = tree;
    while(tempTree || !isEmpty_T(stack)){
        if(tempTree){
            Push_T(tempTree, stack);
            tempTree = tempTree->left;
        } else {
            tempTree = Pop_T(stack);
            printf("%c\n", tempTree->data);
            tempTree = tempTree->right;
        }
    }
}



Stack *CreateStack_T()
{
    Stack *stack = (Stack*)malloc(sizeof(struct Node_T));
    stack->Next = NULL;
    return stack;
}

int isEmpty_T(Stack *Stack)
{
    return (Stack->Next == NULL);
}

void Push_T(BinTree item, Stack *stack)
{
    Stack *TempCell = (Stack*)malloc(sizeof(struct Node_T));
    TempCell->Data = item;
    TempCell->Next = stack->Next;
    stack->Next = TempCell;
}

BinTree Pop_T(Stack *stack)
{
    Stack *FirstCell;
    BinTree TopElem;

    if(isEmpty_T(stack))
    {
        printf("栈已空！\n");
        return -1;
    }
    else
    {
        FirstCell = stack->Next;
        TopElem = FirstCell->Data;
        stack->Next = FirstCell->Next;
        free(FirstCell);
        return TopElem;
    }
}

BinTree getTop_T(Stack *stack)
{
    if(isEmpty_T(stack))
    {
        printf("栈已空！\n");
        return -1;
    } else{
        return stack->Next->Data;
    }
}