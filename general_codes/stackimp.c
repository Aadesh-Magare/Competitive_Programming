#include<stdio.h>
#include "stack.h"
int main(){
	stack s;
	init(&s);
	int n = 0, m, j = 0, k = 0, l;
	while(isfull(&s)){
		scanf("%d", &n);
		push(&s, n);
	}
	while(isempty(&s)){
		printf("top :%d		pop: %d \n", top(&s), pop(&s));
	}
	return 0;
}
