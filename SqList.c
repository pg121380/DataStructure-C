#include "SqList.h"
SqList InitList_Sq(){
    SqList list = (SqList)malloc(sizeof(SqList));
    list -> elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if(!list -> elem){
        printf("顺序表创建失败！");
        return NULL;
    }
    list -> length = 0;
    list -> listSize = LIST_INIT_SIZE;
    return list;
}

void ListOutput_Sq(SqList list){
    int i;
    for(i = 0;i < list -> length;i++){
        if(i % 5 == 0){
            printf("\n");
        }
        printf("%d\t",list -> elem[i]);
    }
}

int ListInsert_Sq(SqList list, int pos, ElemType item){
    if(pos < 0 || pos > list->length + 1){
        printf("输入的插入位置有误！\n");
        return FALSE;
    }
    if(list->length >= LIST_INIT_SIZE){
        ElemType *newPlace = (ElemType*)realloc(list->elem, (list->listSize + LISTINCREMENT) * sizeof(ElemType));
        if(!newPlace){
            printf("内存空间不足！\n");
            return FALSE;
        }
        list->elem = newPlace;
        list->listSize += LISTINCREMENT;
    }
    int i;
    for(i = list->length - 1;i >= pos;i--){
        list->elem[i + 1] = list->elem[i];
    }
    list->elem[pos] = item;
    list->length += 1;
    return TRUE;
}

void ListInverse_Sq(SqList list){
    if(list->length <= 1){
        return;
    }
    int i = 0;
    int j = list->length - 1;
    ElemType temp;
    while(i < j){
        temp = list->elem[i];
        list->elem[i] = list->elem[j];
        list->elem[j] = temp;
        i++;
        j--;
    }
}