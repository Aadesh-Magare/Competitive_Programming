#include<stdio.h>
int main(){
	int i, j, k, l, a, b, n;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		for(l = 1; l <= b; l++){
		for(i = 1; i <= a; i++){
			for(j = 1; j <= i; j++)
				printf("%d", i);
			printf("\n");
		}
		for(i = a-1; i >= 1; i--){
			for(j = 1; j <= i; j++)
				printf("%d", i);
			printf("\n");
		}
		if(l != b)	
			printf("\n");
		}
		if(n > 0)
			printf("\n");
	}
	return 0;
}
