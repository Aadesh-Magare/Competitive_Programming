#include"llist.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void init(list *l){
	l->head = l->tail = NULL;
	l->length = 0;
}
void append(list *l, char *name){
	node *temp;
	temp = (node *)malloc(sizeof(node));
	strcpy(temp->name, name);
	if(l->tail == NULL){ //appending first node 
		l->head = l->tail = temp;
		temp->next = NULL;
	}
	else{
		l->tail->next = temp;
		temp->next = NULL;
		l->tail = temp;
	}
	l->length++;	
}
void insert(list *l, char *name, int pos){
	if(pos > l->length+1 || pos < 1){
		perror("invalid position:\n");
		return;
	}
	int i;
	node *temp, *ptr;
	temp = (node *)malloc(sizeof(node));
	strcpy(temp->name, name);
	if( pos == 1){
		ptr = l->head;
		l->head = temp;
		temp->next = ptr;
		l->length++;
		return;
	}
	if(pos == l->length+1){
		ptr = l->tail;
		temp->next = NULL;
		ptr->next = temp;
		l->tail = temp;
		l->length++;
		return;
	}
	ptr = l->head;
	for( i = 1; i < pos - 1; i++)
		ptr = ptr->next;
	temp->next = ptr->next; 
	ptr->next = temp;
	l->length++;
}
char *remov(list *l, int pos){
	int i;
	node *temp, *data;
	char *name = (char *)malloc(sizeof(char) * 32);
	temp = l->head;
	if(pos > l->length || pos < 1){
		perror("Invalid position:");
		return NULL;
	}
	if(pos == 1){
		strcpy(name, l->head->name);
		if(l->head == l->tail)
			l->tail = NULL;
		temp = l->head;
		l->head = l->head->next;
		free(temp);
		l->length--;
		return name;
	}
	for( i = 1; i < pos-1; i++)
		temp = temp->next;
	data = temp->next;
	strcpy(name,data->name);
	temp->next = data->next;
	if(pos == l->length)
		l->tail = temp;
	free(data);
	l->length--;
	return name;
}
char *getelement(list *l, int pos){
	int i;
	node *temp;
	temp = l->head;
	if(pos > l->length || pos < 1){
		perror("Invalid position:");
		return NULL;
	}
	for( i = 1; i < pos; i++)
		temp = temp->next;
	return temp->name;
}
void traverse(list *l){
	node *temp;
	temp = l->head;
	while(temp){
		printf("%s\n",temp->name);
		temp = temp->next;
	}
	return;
}
int length(list *l){
	return l->length;
}
node *locatepos(list *l, int pos){
	if(pos > l->length || pos < 1){
		perror("Invalid position:");
		return NULL;
	}
	node *temp;
	int i;
	temp = l->head;
	for(i = 1; i < pos; i++){
		temp = temp->next;
	}
	return temp;
}
void reverse(list *l){ 
	if(l->length < 2)
		return;
	node *temp, *next, *prev;
	temp = l->head->next;
	prev = l->head;
	next = temp->next;
	while(next){
		temp->next = prev;
		prev = temp;
		temp = next;
		next = next->next;
	}

	temp->next = prev;
	temp = l->head;
	l->head = l->tail;
	l->tail = temp;
	l->tail->next = NULL;
	return;
}
list createfromfile(char *s){
	FILE *fp;
	list l;
	init(&l);
	char n[32];
	fp = fopen(s, "r");
	if(fp == NULL){
		perror("Error opening file");
		return l;
	}
	else{
		while(fscanf(fp, "%s", n) != EOF){
			append(&l, n);
		}
	}
	return l;
} 
