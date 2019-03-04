#include "LinkList.h"

LinkList CreateList_L(){
    LinkList list = (LinkList)malloc(sizeof(LinkList));
    if(list){
        list->next = NULL;
        return list;
    } else {
        printf("内存空间不足！\n");
        return NULL;
    }
}

int ListInsert_L(LinkList list, int pos, ElemType item){
    LinkList pTemp = list;
    int i = 0;
    while((pTemp != NULL) && i < pos - 1){
        pTemp = pTemp->next;
        i++;
    }
    if((pTemp == NULL) || i > pos - 1){
        printf("请输入合法的插入位置！\n");
        return FALSE;
    }

    LinkList insertNode = (LinkList)malloc(sizeof(LNode));
    insertNode->data = item;
    insertNode->next = pTemp->next;
    pTemp->next = insertNode;
    return TRUE;
}

void ListOutput(LinkList list){
    LinkList  pTemp = list->next;
    int i = 0;
    while(pTemp){
        printf("%d\t",pTemp->data);
        pTemp = pTemp->next;
        i++;
        if(i % 5 == 0){
            printf("\n");
        }
    }
}

ElemType GetElem_L(LinkList list, int pos){
    LinkList pTemp = list->next;
    int i = 1;
    while((pTemp != NULL) && (i < pos)){
        pTemp = pTemp->next;
        i++;
    }
    if((pTemp == NULL) || (i > pos)){
        printf("请输入合法的位置！\n");
        return FALSE;
    }
    return pTemp->data;
}

ElemType ListDelete_L(LinkList list, int pos){
    LinkList pTemp = list;
    int i = 0;
    while((pTemp->next != NULL) && i < pos - 1){
        pTemp = pTemp->next;
        i++;
    }
    if((pTemp->next == NULL) || i > pos - 1){
        printf("输入位置非法！\n");
        return FALSE;
    }
    LinkList q = pTemp->next;
    pTemp->next = q->next;
    int value = q->data;
    free(q);
    return value;
}

void ListInverse_L(LinkList list){
    LinkList s = NULL;
    LinkList p = list->next;
    list->next = NULL;
    while(p != NULL){
        s = p;
        p = p->next;
        s->next = list->next;
        list->next = s;
    }
}