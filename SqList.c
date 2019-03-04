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
    if(pos < 0 || pos > list->length){
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

ElemType ListDelete_Sq(SqList list, int pos){
    if(pos < 0 || pos > list->length - 1){
        printf("您输入的位置有误！\n");
        return 0;
    }
    ElemType value = list->elem[pos];
    int i = pos;
    for (i = pos;i < list->length; i++) {
        list->elem[i] = list->elem[i + 1];
    }
    list->length--;
    return value;
}

ElemType GetElem_Sq(SqList list, int pos){
    if(pos < 0 || pos > list->length - 1){
        printf("您输入的位置有误！\n");
        return 0;
    } else {
        return list->elem[pos];
    }
}

int GetElemIndex_Sq(SqList list, ElemType item){

    int index = -1;
    int i = 0;
    for(i = 0;i < list->length;i++){
        if(list->elem[i] == item){
            index = i;
        }
    }
    if(index == -1){
        printf("没有找到该元素！\n");
    }
    return index;
    // 在数组有序的情况下可以使用二分查找 如下
    /*
    int low = 0;
    int high = list->length - 1;
    int mid = (low + high) / 2;
    while(low <= high){
        if(item > list->elem[mid]){
            mid = low + 1;
        } else if(item < list->elem[mid]){
            mid = low - 1;
        } else {
            return mid;
        }
    }
    printf("没有找到！\n");
    return -1; */
}

void ClearList_Sq(SqList list){
    int i = 0;
    for(i = 0;i < list->length;i++){
        list->elem[i] = 0;
    }
    list->length = 0;
}

ElemType PriorElem_Sq(SqList list, ElemType next){
    int index = GetElemIndex_Sq(list, next);
    if(index == -1 || index == 0){
        printf("无法找到该数据的前一个数据!\n");
    }else {
        return list->elem[index - 1];
    }
}

ElemType NextElem_Sq(SqList list, ElemType prev){
    int index = GetElemIndex_Sq(list, prev);
    if(index == -1 || index == list->length - 1){
        printf("无法找到该数据的后一个数据!\n");
    }else {
        return list->elem[index + 1];
    }
}

int ListEmpty_Sq(SqList list){
    return list->length == 0 ? TRUE : FALSE;
}

int ListLength_Sq(SqList list){
    return list->length;
}