#include<stdio.h>
#include<string.h>
int main(){
	long long int count, temp, b, i, j, n, q;
	while(1){
		scanf("%lld", &n);
		if( n < 0)
			break;
		temp = (n * (n-1) / 2) + n;
		printf("%lld\n", temp + 1);
	}
	return 0;
}
