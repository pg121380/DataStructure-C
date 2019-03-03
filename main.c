#include <stdio.h>
#include "SqList.h"

int main() {
    SqList list = InitList_Sq();
    ElemType a[] = {1,2,3,4,5};

    for (int i = 0; i < 5; ++i) {
        ListInsert_Sq(list,i,a[i]);
    }
    ListInsert_Sq(list,2,100);
    ListOutput_Sq(list);

    ListInverse_Sq(list);
    ListOutput_Sq(list);
    return 0;
}