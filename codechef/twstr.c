#include<stdio.h>
#include<string.h>
#define MAX 1024
typedef struct node{
	char name[MAX];
	long int priority;
}node;
int main(){
	int n, q, found, foundat, i;
	scanf("%d", &n);
	char tempname[MAX];
	long int maxpri;
	node array[n];
	for(i = 0; i < n; i++){
		scanf("%s", array[i].name);
		scanf("%ld", &array[i].priority);
	}
	scanf("%d", &q);
	while(q--){
		scanf("%s", tempname);
		found = 0;
		for(i = 0; i < n; i++){
			if(strncmp(array[i].name, tempname, strlen(tempname)) == 0){
				if(!found){	//found the first match then set max equal to that priority
					maxpri = array[i].priority;
					foundat = i;
				}
				if(maxpri < array[i].priority){
					maxpri = array[i].priority;
					foundat = i;
				}
				found = 1;	
			}
		}
		if(found){
			printf("%s\n", array[foundat].name);
		}
		else
			printf("NO\n");
			
	}
	return 0;
}
