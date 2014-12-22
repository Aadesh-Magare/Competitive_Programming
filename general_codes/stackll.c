#include "stackll.h"
#include<stdio.h>
#include<stdlib.h>
void init(stack *s){
	s->top = NULL;
}
int pop(stack *s){
	int n;
	if(s->top == NULL){
		printf("Stack Empty");
		return 0;
	}
	if(s->top->next == NULL){
		n = s->top->data;
		free(s->top);
		s->top = NULL;
		return n;
	}
	n = s->top->data;
	node *temp;
	temp = s->top;
	s->top = s->top->next;
	free(temp);
	return n;
}
void push(stack *s, int n){
	node *temp;
	temp = (node *)malloc(sizeof(node));
	temp->data = n;
	if(s->top == NULL){
		s->top = temp;
		s->top->next = NULL;
	}
	else{
		temp->next = s->top;
		s->top = temp;
	}
}
int isempty(stack *s){		// empty return 1
	return (s->top == NULL);
}
int isfull(stack *s){
	return 0;
}
int top(stack *s){
	if(s->top == NULL)
		return 0;
	return (s->top->data);
}
