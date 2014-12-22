#include"llist.h"
#include<stdio.h>
#include<stdlib.h>
void printmenu(void){
		printf("Enter choice:\n1.append\n2.insert at pos\n3.remove from pos\n4.getelement at pos\n5.traverse\n6.reverse\n7.length\n8.Print Menu\n9.Create list from File\n10.exit\n");
}
int main(){
	list l;
	int n, x;
	char s[32];
	init(&l);
	printmenu();
	while(1){
		scanf("%d", &n);
		switch(n){
			case 1:
				printf("String:\n");
				scanf("%s",s);
				append(&l, s);
				break;
			case 2:
				printf("String and position\n");
				scanf("%s %d",s, &x);
				insert(&l, s, x);
				break;
			case 3:
				printf("Position:\n");
				scanf("%d",&x);
				remov(&l, x);
				break;
			case 4:
				printf("Position:\n");
				scanf("%d",&x);
				printf("%s",getelement(&l, x));
				break;
			case 5:
				traverse(&l);
				break;
			case 6:
				reverse(&l);
				break;
			case 7:
				printf("%d\n",length(&l));
				break;
			case 8:
				printmenu();
				break;
			case 9:
				printf("Enter the file path:\n");
				scanf("%s",s);
				l = createfromfile(s);
				traverse(&l);
				break;
			case 10:
				exit(0);
			default: 
				printf("Invalid argument\n");
		}
	}
	return 0;
}
