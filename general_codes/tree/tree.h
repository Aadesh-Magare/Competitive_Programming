#ifndef __TREE_H
#define __TREE_H

#define MAX 32
#define MAXM(a,b) ((a) > (b) ? (a) : (b))

typedef struct node{
	int n;
	struct node *left, *right;
	int h;
}node;

typedef struct node * tree;

void init(tree *t);
void insert(tree *t, int n);
void remov(tree *t, int n);
node *locate(tree t, int n);
node *predecessor(tree t);
node *successor(tree t);
int length(tree t);
void inordertraverse(tree t);
void preordertraverse(tree t);
void postordertraverse(tree t);
void iterativetraverse(tree t);
void levelordertraverse(tree t);
#endif
