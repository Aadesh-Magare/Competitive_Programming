#include<stdio.h>
#define SET 1
#define CLEAR 0 //simplest program with worst time/space complexity v.1
int main(){
	int n = 3, i, count = 1, k;
	int flag = SET; 
	scanf("%d", &k);
	printf("2\n");	
	while(n <= k){
		for( i = 2; i < n; i++){
			if(n % i == 0){
				flag = CLEAR;
				break;
			}
		}
		if(flag){
			count++;
		//	printf("%d\n", n);
		}
		flag = SET;
		n++;
	}
	printf("%d\n", count);
	return 0;

}
