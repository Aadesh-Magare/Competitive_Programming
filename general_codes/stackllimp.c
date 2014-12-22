#include<stdio.h>
#include "stackll.h"
int main(){
	int n, i, j;
	stack s;
	init(&s);
	while(scanf("%d", &n) != EOF){
		push(&s, n);
	}
	while(scanf("%d", &n) != EOF){
		printf("%d ",top(&s));
		printf("%d ",pop(&s));
	}
	return 0;
}
