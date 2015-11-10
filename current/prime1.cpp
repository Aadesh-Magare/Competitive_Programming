#include<stdio.h>
#include<math.h>
#define MAXM(a, b) (a > b)?(a):(b)
#define MAX 1000000
int main(){
	long long int a[MAX], i, j, diff, sq, s, k, m, n;
	int prime[20000], l = 3, flag, t;
	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	for(i = 7; i <= 31623; i += 2){
		flag = 0;
		for(k = 0; prime[k] <= (int)sqrt(i); k++){
			if(!(i % prime[k])){
				flag = 1;
				break;
			}
		}
		if(!flag)
			prime[l++] = i;
	}
	scanf("%d", &t);
	while(t--){
		scanf("%lld %lld", &m, &n);
		diff = n-m;
		sq = (long long int)sqrt(n);
		for(i = 0; i < diff; i++){
			a[i] = m+i;
		}
		for(i = 0; prime[i] <= sq; i++){
				j = 0;
				s = prime[i] * prime[i];
				while(a[j] < s && j < diff)
					j++;
				while(j < diff){
					if(!(a[j] % prime[i])){
						a[j] = 0;
					}
					j++;
				}
		}
		if(m == 1){
			a[0] = 0;
			if(n >= 2){
				printf("2\n");
				for(i = 0; i < diff; i++)
					if(a[i] == 2){
						a[i] = 0;
						break;
					}
						
			}
			if(n >= 3){
				printf("3\n");
				for(i = 0; i < diff; i++)
					if(a[i] == 3){
						a[i] = 0;
						break;
					}
			}
		}
		for(i = 0; i < diff; i++)
			if(a[i])
				printf("%lld\n", a[i]);
		printf("\n");
	}
	return 0;
}
