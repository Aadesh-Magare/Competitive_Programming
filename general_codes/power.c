#include<stdio.h>
#include<math.h>
int main(){
	int x, n;
	long long int power, next;
	scanf("%d%d", &x, &n);
	power = 1;
	next = x;
	while(n > 0){
		if( n % 2 == 1){
			power *= next;
		}
		n = n / 2;
		next *= next;
	}
	printf("%lld", power);
	return 0;
}
