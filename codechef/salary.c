#include<stdio.h>
int main(){
	int count, temp, min, a, b, i, j, n, q, t;
	long long int sum;
	scanf("%d", &t);
	for(i = 0; i < t; i++){	
		scanf("%d", &n);
		min = 100000; sum = 0;
		for(j = 0; j < n; j++){
			scanf("%d", &temp);
			sum += temp;
			if(temp < min)
				min = temp;
		}
		printf("%lld\n", sum - n * min);
	}
	return 0;
}
