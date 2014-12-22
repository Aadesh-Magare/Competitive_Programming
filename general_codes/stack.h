#define MAX 7
typedef struct stack{
	int array[MAX];
	int count;
}stack;
void init(stack *s);
void push(stack *s, int n);
int pop(stack *s);
int top(stack *s);
int isempty(stack *s);
int isfull(stack *s);
