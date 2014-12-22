#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
int main(){
	queue q;
	init(&q);
	int n;
	printf("Enter 1 for Enqueue\n2 For Dequeue\n3 for Exit\n");
	while(1){
		scanf("%d", &n);
		switch(n){
			case 1:
				scanf("%d", &n);
				if(!isfull(&q))
					enqueue(&q, n);
				else
					printf("Queue is full\n");
				break;
			case 2:
				if(!isempty(&q))
					printf("%d ", dequeue(&q));
				else
					printf("Queue is Empty\n");	
				break;
			case 3:
				exit(0);
			default:
				printf("Invalid argument");
		}
	}
	return 0;
}
