//
// Created by Administrator on 2019/3/13.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H
typedef struct Node{
    int Data;
    struct Node *Next;
}LinkStack;

LinkStack *CreateStack();
int isEmpty(LinkStack*);
void Push(int,LinkStack*);
int Pop(LinkStack*);
#endif //UNTITLED_STACK_H
