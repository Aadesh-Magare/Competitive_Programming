typedef struct node{
	int data;
	struct node *next;
}node;

typedef struct stack{
	struct node *top;
}stack;

void init(stack *s);
void push(stack *s, int n);
int pop(stack *s);
int isempty(stack *s);
int isfull(stack *s);
