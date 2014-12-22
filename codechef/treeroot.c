#include<stdio.h>
#include<string.h>
int main(){
	long int count, temp, a, b, i, j, n, q;
	long long int sum, nsum;
	scanf("%ld", &a);
	while(a--){
		sum = nsum = 0;
		scanf("%ld", &n);
		for(i = 0; i < n; i++){
			scanf("%ld %ld", &temp, &q);
			sum += temp;
			nsum += q;
		}
		printf("%lld\n",sum - nsum);
	}
	return 0;
}
