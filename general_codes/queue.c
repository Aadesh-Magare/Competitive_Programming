#include<stdio.h>
#include"queue.h"

void init(queue *q){
	q->front = q->rear = 0;
}
void enqueue(queue *q, int n){
	q->array[q->rear] = n;
	q->rear = (q->rear + 1) % MAX;
}
int dequeue(queue *q){
	int n;
	n = q->array[q->front];
	q->front = (q->front + 1) % MAX;
	return n;
}
int get(queue *q){
	return (q->array[q->front]);
}
int isempty(queue *q){
	if(q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfull(queue *q){
	if((q->rear + 1) % MAX == q->front)
		return 1;
	else 
		return 0;
}
