#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1024
typedef struct stack{
	int array[MAX];
	int next;
}stack;

void init(stack *s){
	s->next = 0;
}
void push(stack *s, int c){
	s->array[s->next] = c;
	s->next++;
}
int pop(stack *s){
	int c;
	c= s->array[s->next - 1];
	s->next--;
	return c;
}
int isempty(stack *s){
	return s->next == 0;
}
int isfull(stack *s){
	return s->next == MAX-1;
}
int main(){
	stack st;
	init(&st);
	char s[1024], c, token[64];
	int i = 0, a, b;
	printf("Enter postfix expression separeted by spaces \n");
	while( (c = getchar()) != '\n')
		s[i++] = c;
	s[i] = '\0';
	a = 0; int sum = 0; 
	while( (c = s[a]) != '\0'){
		if( c >= '0' && c <= '9'){
			sum = 0;
			sum = sum * 10 + (c - '0');
			while( (c = s[++a]) != ' ')
				sum = sum * 10 + (c - '0');
			a++;
			push(&st, sum);
		}
	 	else if( c == ' ' || c == '\t')
			a++;
		else{
			switch(c){
			case '+' :
				push(&st, (pop(&st) + pop(&st)));
				break;
			case '-' :
				b = pop(&st);
				a = pop(&st);
				push(&st, a - b);
				break;
			case '*' :
				push(&st, (pop(&st) * pop(&st)));
				break;
			case '/' :
				b = pop(&st);
				a = pop(&st);
				push(&st, a / b);
				break;
			case '%' :
				b = pop(&st);
				a = pop(&st);
				push(&st, a % b);
				break;
			default: 
				printf("Some error check expression\n");
			}
			a++;
		}
	}
	printf("%d\n", pop(&st));
	return 0;
}
