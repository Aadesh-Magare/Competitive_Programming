#ifndef __STACKT_H
#define __STACKT_H
#include "tree.h"
typedef struct stack{
	node *array[MAX];
	int count;
}stack;
void inits(stack *s);
void push(stack *s, node *n);
node *pop(stack *s);
node *top(stack *s);
int isempty(stack *s);
int isfull(stack *s);
#endif
