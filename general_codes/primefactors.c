#include<stdio.h>
#include<math.h>
int main(){	
	int n, prime[1024], sqrtn, sqrtp;
	int i = 0, j = 0, k = 1;
	int factors[512];
	prime[0] = 2;
	int flag = 1;
	scanf("%d", &n);
	sqrtn = sqrt(n);
	for(i = 3; i <= sqrtn; i += 2){
		sqrtp = sqrt(i);
		for( j = 0; prime[j] <= sqrtp; j++){
			if (i % prime[j] == 0){
				flag = 0;
				break;
			}
		}
		if(flag){
			prime[k++] = i;
		}
		flag = 1;
	}
	j = 0;
	for(i = 0; prime[i] <= sqrtn && n > 1 && k >= 0; i++, k--){
		if( n % prime[i] == 0){
			n = n / prime[i];
			factors[j++] = prime[i--];
		//	printf("%d\n",factors[j - 1]);
		}
	}
	for(k = 0; k < j; k++)
		printf("%d\n", factors[k]);
	if(n != 0)
		printf("%d\n", n);
	return 0;
}
