#include<stdio.h>
#define MAX 26
#include<string.h>
#include<stdlib.h>
typedef struct student{
	char name[64];
	int age;
	int marks;
	struct student *next;
}student;

student *hashtable[MAX];

int hash(char *name){
	return *name % MAX;
}
void inithash(){
	int i;
	for( i = 0; i < MAX; i++)
		hashtable[i] = NULL;
}
void printhash(){
	int i;
	for(i = 0; i < MAX; i++)
		if(hashtable[i] != NULL){
			student *node;
			node = hashtable[i];	
			while(node){	
				printf("\n %s %d %d", node->name, node->age, node->marks);
				node = node->next;
			}
			//printf("\n %s %d %d", node->name, node->age, node->marks);
		}
}
int main(){
	char name[64];
	int i, j, k, l, m, temp, age, marks;
	inithash();
	printf("Enter the info \nName Age Marks\nEOF to end\n");
	while(scanf("%s%d%d", name, &age, &marks) != EOF){
		i = hash(name);	
		if(hashtable[i] == NULL){
			student *node = (student*)malloc(sizeof(student));
			strcpy(node->name, name);
			node->age = age;
			node->marks = marks;
			hashtable[i] = node;
			node->next = NULL;
		}
		else{
			student *temp = (student*)malloc(sizeof(student));
			student *node;
			strcpy(temp->name,name);
			temp->age = age;
			temp->marks = marks;

			node = hashtable[i];
			while(node->next != NULL){
				node = node->next;
			}
			node->next = temp;
			temp->next = NULL;
		}
	}
	printhash();
	printf("\nEnter the name to be searched :\nEOF to end\n");
	while(scanf("%s", name) != EOF){
		i = hash(name);
		if(hashtable[i] == NULL)
			printf("entry NOT found\n");
		
		else{	
			if(strcmp(hashtable[i]->name, name) == 0)
				printf("entry found : \n %s %d %d \n", hashtable[i]->name, hashtable[i]->age, hashtable[i]->marks);
			else {
				int found = 0;
				student *node;
				node = hashtable[i];
				while( node->next != NULL){
					node = node->next;
					if(strcmp(node->name, name) == 0){
						found = 1;
						printf("entry found : \n %s %d %d \n", node->name, node->age, node->marks);
					}
				}
				if(!found)
					printf("entry NOT found\n");
			}
		}
	}		
	printf("Bye! Bye! \n");
	return 0;
}
