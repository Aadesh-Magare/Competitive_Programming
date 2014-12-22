#include<stdio.h>
#include "queuet.h"

void initq(queue *q){
	q->front = q->rear = 0;
}
void enqueue(queue *q, node *n){
	if(!isfullq(q)){
		q->array[q->rear] = n;
		q->rear = (q->rear + 1) % MAX;
	}
}
node *dequeue(queue *q){
	if(!isemptyq(q)){
		node *n;
		n = q->array[q->front];
		q->front = (q->front + 1) % MAX;
		return n;
	}
}	
node *get(queue *q){
	return (q->array[q->front]);
}
int isemptyq(queue *q){
	if(q->front == q->rear)
		return 1;
	else
		return 0;
}
int isfullq(queue *q){
	if((q->rear + 1) % MAX == q->front)
		return 1;
	else 
		return 0;
}
