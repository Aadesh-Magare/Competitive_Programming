#include<stdio.h>
#define MAX 1024
typedef struct stack{
	char array[MAX];
	int next;
}stack;

void init(stack *s){
	s->next = 0;
}
void push(stack *s, char c){
	s->array[s->next] = c;
	s->next++;
}
char top(stack *s){
    return s->array[s->next - 1];
}
char pop(stack *s){
	char c;
	c = s->array[s->next - 1];
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
	int osp[50];
	osp['%'] = osp['/'] = osp['*'] = 8; osp['('] = 10;  osp[')'] = 9;   osp['+'] = osp['-'] = 7;
	int isp[50];
	isp['%'] = isp['/'] = isp['*'] = 8; isp['('] = 0;  isp[')'] = 9;   isp['+'] = isp['-'] = 7;
	int i = 0, a, b;
	printf("Enter Infix expression separeted by spaces \n");
	while( (c = getchar()) != '\n')
		s[i++] = c;
	s[i] = '\0';
	
	a = 0; int sum = 0; 
	while( (c = s[a]) != '\0'){
		if( c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '(' || c== ')'){
		    if( c == ')'){
		        while(top(&st) != '(')
		            printf(" %c", pop(&st));
		        pop(&st); 
		    }
		    else{
		       	while(!isempty(&st) && osp[c] <= isp[top(&st)])
		           printf(" %c", pop(&st));  
		        push(&st, c);
		    }
			a++;            
	    	}
	    	else{
	    		printf("%c", c);
	        	a++;
	    	}
	}
	while(!isempty(&st))
	    printf(" %c", pop(&st));
    return 0;	    
}

