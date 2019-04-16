#include "LinkQueue.h"

LinkQueue InitQueue_L(){
    LinkQueue queue = (LinkQueue) malloc(sizeof(LNode));
    if(queue){
        queue->next = NULL;
        return queue;
    } else {
       printf("内存不足，无法分配空间\n");
       return NULL;
    }
}

void DestroyQueue(LinkQueue queue){
    DestoryList_L(queue);
}

void ClearQueue(LinkQueue queue){
    LinkQueue temp = queue;
    while(temp){
        temp->data = 0;
        temp = temp->next;
    }
}

int QueueEmpty(LinkQueue queue){
    return ListEmpty_L(queue);
}

int QueueLength(LinkQueue queue){
    printf("hello1\n");
    return ListLength_L(queue);
}