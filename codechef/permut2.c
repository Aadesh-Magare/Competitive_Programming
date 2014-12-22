#include<stdio.h>
int main(){
	long int n, i, temp, a[100001], flag;
	while(1){
		flag = 0;
		scanf("%ld", &n);
		if(!n)
			break;
		for(i = 1; i <= n; i++)
			scanf("%ld", &a[i]);
		for( i = 1; i <= n; i++){
			temp = a[i];
			if(a[temp] != i){
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("not ambiguous\n");
		else	
			printf("ambiguous\n");
	}
	return 0;
}
