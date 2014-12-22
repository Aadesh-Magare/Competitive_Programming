#include<stdio.h>
#include<math.h>
int main(){
	long int n, s, i, t;
	scanf("%ld", &t);
	while(t--){
		scanf("%ld", &n);
		s = (long int)sqrt(n);
		if(s * s == n)
			printf("0\n");
		else{
			for(i = s; i ; i--){
				if(n % i == 0){
					printf("%ld\n", (n/i - i));
					break;
				}
			}
		}
	}
	return 0;
}
