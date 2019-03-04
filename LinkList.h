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
#endif //WORKPLACE_CLION_LINKLIST_H
