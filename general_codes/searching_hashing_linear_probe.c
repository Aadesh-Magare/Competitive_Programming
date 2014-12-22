#include<stdio.h>
#define MAX 26
#include<string.h>
typedef struct student{
	char name[64];
	int age;
	int marks;
}student;
student hashtable[MAX];
int hash(char *name){
	printf("hash: %d\n", *name % MAX);
	return *name % MAX;
}
void inithash(){
	int i;
	for( i = 0; i < MAX; i++)
		hashtable[i].age = -1;
}
void printhash(){
	int i;
	for(i = 0; i < MAX; i++)
		if(hashtable[i].age != -1)
			printf("\n %s %d %d", hashtable[i].name, hashtable[i].age, hashtable[i].marks);	
}
int main(){
	char name[64];
	int i, j, k, l, m, temp, age, marks;
	inithash();
	printf("Enter the info \nName Age Marks\nEOF to end\n");
	while(scanf("%s%d%d", name, &age, &marks) != EOF){
		i = hash(name);	
		if(hashtable[i].age == -1){
			strcpy(hashtable[i].name, name);
			hashtable[i].age = age;
			hashtable[i].marks = marks;
		}
		else{
			j = (i + 1) % MAX;
			while( j != i && hashtable[j].age != -1)
				j = (j + 1 ) % MAX;
			if( j == i)
				printf("Hash table full ::\n");
			else{
				strcpy(hashtable[j].name, name);
				hashtable[j].age = age;
				hashtable[j].marks = marks;
			}
		}	
	}
	printhash();
	printf("\nEnter the name to be searched :\nEOF to end\n");
	while(scanf("%s", name) != EOF){
		i = hash(name);
		if(strcmp(hashtable[i].name, name) == 0)
			printf("entry found : \n %s %d %d \n", hashtable[i].name, hashtable[i].age, hashtable[i].marks);
		else{
			j = (i + 1) % MAX;
			while( j != i && hashtable[j].age != -1){
				if(strcmp(hashtable[j].name, name) == 0){
					printf("entry found : \n %s %d %d \n", hashtable[j].name, hashtable[j].age, hashtable[j].marks);
					break;
				}
				else
					j = ( j + 1 ) % MAX;

			}
			if( j == i || hashtable[j].age == -1)
				printf("Entry not found \n");
			
		}
	}		
	printf("Bye! Bye! \n");
	return 0;
}
