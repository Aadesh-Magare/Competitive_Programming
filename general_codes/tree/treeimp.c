#include<stdio.h>
#include"tree.h"
#include<stdlib.h>
#define TREEWIDTH 128
void menu(){
	printf("1.Inorder\n2.Preorder\n3.Postorder\n4.Iterative\n5.LevelOrder\n6.Insert\n7.Remove\n8.Menu\n9.Exit\n10.Print Tree");	
}
int main(){
	tree t;
	int n, i;
	init(&t);
	menu();
	while(1){
		scanf("%d", &n);
		switch(n){
			case 1:
				inordertraverse(t);
				break;
			case 2:
				preordertraverse(t);
				break;
			case 3:
				postordertraverse(t);
				break;
			case 4:
				iterativetraverse(t);
				break;
			case 5:
				levelordertraverse(t);
				break;
			case 6:
				printf("Number to b Inserted:\n");
				scanf("%d", &i);
				insert(&t, i);
				break;
			case 7:
				printf("Number to b Removed:\n");
				scanf("%d", &i);
				remov(&t, i);
				break;
			case 8:
				//menu();
				printf("Number to b Located:\n");
				scanf("%d", &i);
				node *tmp;
				tmp = locate(t, i);	
				printf("%d ", tmp->n);
				break;
			case 9:
				exit(0);
			case 10:
				printtree(t);
				break;
			default :
				printf("Enter Valid input:\n");
		}	
	}
	return 0;
}
