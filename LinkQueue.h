#ifndef WORKPLACE_CLION_LINKQUEUE_H
#define WORKPLACE_CLION_LINKQUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

typedef LinkList LinkQueue;
typedef int ElemType;

LinkQueue InitQueue_L();
void DestroyQueue(LinkQueue queue);
void ClearQueue(LinkQueue queue);
int QueueEmpty(LinkQueue queue);
int QueueLength(LinkQueue queue);

#endif