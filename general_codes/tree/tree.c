#include<stdio.h>
#include<stdlib.h>
#include "stackt.h"
#include "queuet.h"
#include "tree.h"
#include <math.h>
void init(tree *t){
	(*t) = NULL;
}
int depth(tree t){
	if(t == NULL)
		return 0;
	return 1 + MAXM(depth(t->left), depth(t->right));
}
void remov(tree *t, int n){
	node *temp, *prev;
	temp = *t;
	while(temp){
		if(n < temp->n){
			prev = temp;
			temp = temp->left;
		}
		else if( n > temp->n){
			prev = temp;
			temp = temp->right;
		}
		else
			break;
	}
	if(!temp){
		printf("Not found\n");
		return;
	}
	if((*t)->left == (*t)->right){
		free(*t);
		*t = NULL;
		return;
	}
	if(temp->left == temp->right){	//leaf node
			printf("Removing the leaf node\n");
			if(prev->n > n)
				prev->left = NULL;
			else
				prev->right = NULL;
			free(temp); 
			return;
		}
	else if(temp->left == NULL && temp->right != NULL){	//only RST delete and join
			printf("Removing the RST node\n");
			if(n < prev->n)	// was on left of parent
				prev->left = temp->right;
			else		// was on right of parent
				prev->right = temp->right;
			free(temp);
			return;
		}
	else if(temp->right == NULL && temp->left != NULL){	//only LST delete and join
			printf("Removing the LST node\n");
			if( n < prev->n)
				prev->left = temp->left;
			else
				prev->right = temp->left;
			free(temp);
			return;
		}
	else{	//has both RST and LST use of predecessor and successor
			printf("Removing the RST & LST node\n");
			node *pred, *parent;
			int data;
			parent = temp;
			pred = temp->left;
			while(pred->right != NULL){
				parent = pred;
				pred = pred->right;
			}		
			temp->n = pred->n;
			//predecessor is guranteed to have a empty Right node.
			if(parent == temp){
				parent->left = pred->left;
			}
			else{
				parent->right = pred->left;
			}
			free(pred);
	}
}
node *predecessor(tree t){
	if(t == NULL)
		return;
	node *temp;
	temp = t;
	if(temp->left == NULL)
		return NULL;
	temp = temp->left;
	while(temp->right != NULL)
		temp = temp->right;
	return temp;
}
node *successor(tree t){
	if(t == NULL)
		return;
	node *temp;
	temp = t;
	if(temp->right == NULL) 
		return NULL;
	temp = temp->right;
	while(temp->left != NULL)
		temp = temp->left;
	return temp;
}
node *locate(tree t, int n){
	if(t == NULL)
		return NULL;
	node *temp, *prev;
	temp = t;
	if(temp->n == n)
		return temp;
	if(n < temp->n){
		prev = temp;
		temp = locate(temp->left, n);
	}
	else{
		prev = temp;
		temp = locate(temp->right, n);
	}
	if(!temp)
		return prev;
	return temp;
}
void iterativetraverse(tree t){
	node *temp;
	stack st;
	inits(&st);
	temp = t;
	if(!temp)
		return;
	while(1){
		for(; temp; temp = temp->left)
			push(&st, temp);
		temp = pop(&st);
		if(!temp)
			break;
		printf("%d\t",temp->n);
		temp = temp->right;
	}
}
/*
void printtree(tree t){	
	queue q;
	initq( &q );
	tree p;
	char char1;
	int count = 0;
	int level = 0;
	int i, d,n = 60;
	d = depth( t );
	enqueue( &q, t );
	while( 1 )
	{
		p  = dequeue( &q );
		count++;
		if( count == 1 )
		{
			for( i = 0; i <= n; i++ )
				printf(" ");
		}
		else
		{
			for( i = 0; i < (2 * n  - 3); i++ )
				printf(" ");
		}
		if( p != NULL )
			printf("%d", p -> n );
		else
			printf("");
		if( p != NULL )
		{
			enqueue( &q, p ->left );
			enqueue( &q, p -> right);
		}
		if( p == NULL )
		{
			enqueue( &q , p );
			enqueue( &q , p );
		}
		if( count == pow(2, level ) )
		{
			
			printf("\n\n");

			for( i = 0; i < n / 2; i++ )
				printf(" ");
			while( count != 0)
			{
				for( i = 0; i <  n; i++ )
					printf("-");
				for( i = 0; i < n; i++ )
					printf(" ");
				count--;
			}
			count = 0;
			printf("\n\n");
			level++;
			n = n/2;
		}
		if( level > depth( t ) )
			break;
	}
	printf("\n");
	return;
}*/
void printtree(tree t){
	if(t == NULL)
		return;
	int mid = 64, i;
	if(t->left == t->right){
		for(i = 0; i < mid-1; i++)
			printf("-");
		printf("%d", t->n);
		for(i = 0; i < mid; i++)
			printf("-");
		printf("\n");
		return;
	}	
	queue q;
	int count = 0, d;
	tree p, old = NULL;
	initq(&q);
	d = depth(t);
	int level = 0;
	enqueue(&q, t);
	while(!isemptyq(&q) && level <= d){
		count = 0;
		p = dequeue(&q);
		while(count < pow(2, level)){
			if(p == old)
				if(isemptyq(&q))
					break;
				else
					p = dequeue(&q);
			for(i = 0; i < mid-4; i++)
				printf(" ");
			if(p != NULL){
				for(i = 0; i < 4; i++)
					printf("-");
				printf("%d", p->n);
				//if(p->left != p->right){
					enqueue(&q, p->left);
					enqueue(&q, p->right);
				//}
			}
			else{
				printf("-");
				enqueue(&q, NULL);
				enqueue(&q, NULL);
			}
			old = p;
			for(i = 0; i < 4; i++)
				printf("-");
			for(i = 0; i < mid; i++)
				printf(" ");
			count++;
		}
		printf("\n\n\n");
		mid = mid/2;
		level++;
	}
}
void levelordertraverse(tree t){
	node *temp;
	queue q;
	initq(&q);
	temp = t;
	if(!temp)
		return;
	enqueue(&q, temp);
	while(!isemptyq(&q)){
		temp = dequeue(&q);
		printf("%d\t", temp->n);
		if(temp->left)
			enqueue(&q, temp->left);
		if(temp->right)
			enqueue(&q, temp->right);
	}
}
void insert(tree *t, int n){
	node *temp;
	if(!*t){
		temp = (node *)malloc(sizeof(node));
		*t = temp;
		temp->left = temp->right = NULL;
		temp->n = n;
		return;
	}
	else{
		node *p;
		p = locate(*t, n);
		if(p->n == n){
			printf("duplicate entry\n");
			return;
		}
		temp = (node*)malloc(sizeof(node));
		temp->n = n;
		temp->left = temp->right = NULL;
		if(p->n > n)
			p->left = temp;
		else
			p->right = temp;
	}
}
void inordertraverse(tree t){
	if(!t)
		return;
	inordertraverse(t->left);
	printf("%d\t", t->n);
	inordertraverse(t->right);
}
void preordertraverse(tree t){
	if(!t)
		return;
	printf("%d\t", t->n);
	preordertraverse(t->left);
	preordertraverse(t->right);
}
void postordertraverse(tree t){
	if(!t)
		return;
	postordertraverse(t->left);
	postordertraverse(t->right);
	printf("%d\t", t->n);
}
