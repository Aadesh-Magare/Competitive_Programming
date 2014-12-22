#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main(){
	int n;
	unsigned long long int  fact = 1;
	scanf("%d", &n);
	while(n > 0){
		fact = fact * n;
		n--;
	}
	printf("%llu", fact);
	return 0;
}
