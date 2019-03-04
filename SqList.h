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
ElemType ListDelete_Sq(SqList list, int pos);
ElemType GetElem_Sq(SqList list, int pos);
int GetElemIndex_Sq(SqList list, ElemType item);
void ClearList_Sq(SqList list);
ElemType PriorElem_Sq(SqList list, ElemType next);
ElemType NextElem_Sq(SqList list, ElemType prev);
int ListEmpty_Sq(SqList list);
int ListLength_Sq(SqList list);
#endif //WORKPLACE_CLION_SQLIST_H
