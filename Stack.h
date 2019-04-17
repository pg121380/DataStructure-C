//
// Created by Administrator on 2019/3/13.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

typedef int ElementType;

typedef struct Node{
    ElementType Data;
    struct Node *Next;
}LinkStack;

LinkStack *CreateStack();
int isEmpty(LinkStack*);
void Push(int,LinkStack*);
ElementType Pop(LinkStack*);
ElementType getTop(LinkStack *Stack);
#endif //UNTITLED_STACK_H
