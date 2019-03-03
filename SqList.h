//
// Created by 93725 on 2019/3/3.
//

#ifndef WORKPLACE_CLION_SQLIST_H
#define WORKPLACE_CLION_SQLIST_H
#include <stdio.h>
#include <stdlib.h>
#define TRUE			1
#define FALSE			0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
typedef int ElemType;

typedef struct							//顺序表结构定义
{
    ElemType *elem;
    int length;
    int listSize;
} Sqlist;

typedef Sqlist *SqList;

SqList InitList_Sq();
void ListOutput_Sq(SqList list);
int ListInsert_Sq(SqList list, int pos, ElemType item);
void ListInverse_Sq(SqList list);

#endif //WORKPLACE_CLION_SQLIST_H
