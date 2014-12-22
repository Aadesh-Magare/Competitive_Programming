#include "stackt.h"
#include <stdio.h>

void inits(stack *s){
	s->count = 0;
}
node *top(stack *s){
	return s->array[s->count];
}
void push(stack *s, node *n){
	if(!isfull(s))
		s->array[s->count++] = n;
}
node *pop(stack *s){
	if(!isempty(s)){
		s->count--;
		return (s->array[s->count]);
	}
}
int isempty(stack *s){
	if(s->count <= 0)
		return 1;
	else
		return 0;
}
int isfull(stack *s){
	if(s->count >= MAX)
		return 1;
	else 
		return 0;
}
