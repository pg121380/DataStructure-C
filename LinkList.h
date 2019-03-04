//
// Created by 93725 on 2019/3/3.
//

#ifndef WORKPLACE_CLION_LINKLIST_H
#define WORKPLACE_CLION_LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#define TRUE		1
#define FALSE		0
typedef int ElemType;
typedef struct LNode			 				//链表节点结构定义
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

LinkList CreateList_L();
int ListInsert_L(LinkList list, int pos, ElemType item);
void ListOutput(LinkList list);
ElemType GetElem_L(LinkList list, int pos);
ElemType ListDelete_L(LinkList list, int pos);
void ListInverse_L(LinkList list);
void DestoryList_L(LinkList list);
void ClearList_L(LinkList list);
int ListEmpty_L(LinkList list);
int ListLength_L(LinkList list);
ElemType PriorElem_L(LinkList list, ElemType next);
ElemType NextElem_L(LinkList list, ElemType prev);
#endif //WORKPLACE_CLION_LINKLIST_H
