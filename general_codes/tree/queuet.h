#ifndef __QUEUET_H
#define __QUEUET_H

#include "tree.h"
typedef struct queue{
	node *array[MAX];
	int front, rear;
}queue;

void initq(queue *q);
void enqueue(queue *q, node *n);
node *dequeue(queue *q);
int isemptyq(queue *q);
int isfullq(queue *q);
node *get(queue *q);
#endif
