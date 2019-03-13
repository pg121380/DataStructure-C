#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

LinkStack *CreateStack()
{
    LinkStack *Stack = (LinkStack*)malloc(sizeof(LinkStack));
    Stack->Next = NULL;
    return Stack;
}

int isEmpty(LinkStack *Stack)
{
    return (Stack->Next == NULL);
}

void Push(int item,LinkStack *Stack)
{
    LinkStack *TempCell = (LinkStack*)malloc(sizeof(LinkStack));
    TempCell->Data = item;
    TempCell->Next = Stack->Next;
    Stack->Next = TempCell;
}

int Pop(LinkStack *Stack)
{
    LinkStack *FirstCell;
    int TopElem;

    if(isEmpty(Stack))
    {
        printf("栈已空！\n");
        return -1;
    }
    else
    {
        FirstCell = Stack->Next;
        TopElem = FirstCell->Data;
        Stack->Next = FirstCell->Next;
        free(FirstCell);
        return TopElem;
    }


}