#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
	char name[32];
	char sign;
}node;
int main(){
	int t,n;
	char tempname[32], tempsign;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		node array[n];
		int count = 0, result = 0, i;
		while(n--){
			scanf("%s",tempname);
			int done = 0;
			while((tempsign = getc(stdin)) == ' ')
					//do nothing
			;
			if(count > 0){
				for(i = 0; i < count; i++){
					if(!strcmp(array[i].name,tempname)){
						strcpy(array[i].name,tempname);
						array[i].sign = tempsign;
						done = 1;
					}		
				}
				if(done != 1){
					strcpy(array[count].name,tempname);
					array[count].sign = tempsign;
					count++;
				}
			}
			else{
				strcpy(array[0].name, tempname);
				array[0].sign = tempsign;
				count++;
			}
		}
		for(i = 0; i < count; i++){
                                if(array[i].sign == '+')
                               		result++;
				// printf("%c\n", array[i].sign);
                                        
                                else
                               		result--;
				 //printf("%c\n", array[i].sign);
               	}
		printf("%d\n", result);
	}
}
