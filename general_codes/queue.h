#define MAX 10
typedef struct queue{
	int array[MAX];
	int front, rear;
}queue;

void init(queue *q);
void enqueue(queue *q, int n);
int dequeue(queue *q);
int isempty(queue *q);
int isfull(queue *q);
int get(queue *q);
