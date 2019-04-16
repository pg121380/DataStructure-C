#include <stdio.h>
#include "SqList.h"
#include "LinkList.h"
#include "LinkQueue.h"
#include "Stack.h"

void testLinkList();
void testSqList();
void testStack();

int main() {
    testStack();
    return 0;
}

void testSqList(){
    SqList list = InitList_Sq();
    ElemType a[] = {1,2,3,4,5};

    for (int i = 0; i < 5; ++i) {
        ListInsert_Sq(list,i,a[i]);
    }
    ListInsert_Sq(list,2,100);
    ListDelete_Sq(list,2);
    ListOutput_Sq(list);
    printf("\n%d", GetElem_Sq(list,2));

}

void testLinkList(){
    LinkList  list = CreateList_L();
    ListInsert_L(list, 1, 1);
    ListInsert_L(list, 1, 2);
    ListInsert_L(list, 1, 3);
    ListInsert_L(list, 1, 4);
    ListInsert_L(list, 1, 5);
    ListOutput(list);
    ListInverse_L(list);
    ListOutput(list);
    DestoryList_L(list);
}

void testStack(){
    LinkStack* stack = CreateStack();
    Push(1, stack);
    Push(2, stack);
    Push(3, stack);
    Push(4, stack);
    Push(5, stack);
    Push(6, stack);
    Push(7, stack);

    while(!isEmpty(stack)){
        printf("%d\n", Pop(stack));
    }

}