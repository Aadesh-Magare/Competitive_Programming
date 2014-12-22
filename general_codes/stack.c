#include "stack.h"
#include<stdio.h>
void init(stack *s){
	s->count = 0;
}
int top(stack *s){
	return s->array[s->count];
}
void push(stack *s, int n){
	s->array[s->count++] = n;
}
int pop(stack *s){
	s->count--;
	return (s->array[s->count]);
}
int isempty(stack *s){
	if(s->count <= 0)
		return 0;
	else
		return 1;
}
int isfull(stack *s){
	if(s->count >= MAX)
		return 0;
	else 
		return 1;
}
