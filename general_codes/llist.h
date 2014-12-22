typedef struct node{
	char name[32];
	struct node *next;
}node;

typedef struct list{
	node *head, *tail;
	int length;
}list;

void init(list *l);
void append(list *l, char *name);
void insert(list *l, char *name, int pos);
char *remov(list *l, int pos);
char *getelement(list *l, int pos);
void traverse(list *l);
void reverse(list *l);
int length(list *l);
node *locatepos(list *l, int pos);
list createfromfile(char *filename);
