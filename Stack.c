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

void Push(ElementType item,LinkStack *Stack)
{
    LinkStack *TempCell = (LinkStack*)malloc(sizeof(LinkStack));
    TempCell->Data = item;
    TempCell->Next = Stack->Next;
    Stack->Next = TempCell;
}

ElementType Pop(LinkStack *Stack)
{
    LinkStack *FirstCell;
    ElementType TopElem;

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

ElementType getTop(LinkStack *Stack)
{
    if(isEmpty(Stack))
    {
        printf("栈已空！\n");
        return -1;
    } else{
        return Stack->Next->Data;
    }
}