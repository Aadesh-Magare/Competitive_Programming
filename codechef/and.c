#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n, k = 0, *a, temp, i, j, sum = 0;
	a = (long long int *)malloc(sizeof(long long int) * 1000000);
	scanf("%lld", &n);
	for( k = 0; k < n; k++)
		scanf("%lld", &a[k]);
	for(i = 0; i < n - 1; i++){
		for( j = i + 1; j < n; j++){
			sum += a[i] & a[j];	
		}
	}
	printf("%lld\n", sum);
	return 0;
}
