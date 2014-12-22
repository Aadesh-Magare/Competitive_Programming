#include<stdio.h>
#include<math.h>
int primes[1024], p;
int main(){
	long int n, sqrtn;
	int i = 2;
	primes[0] = 2;
	p = 1;
	scanf("%ld", &n);
	sqrtn = sqrt(n);
	while( i <= sqrtn){
		if( n % i == 0){
			printf(" NOT prime \n");
			exit(0);
		}
		else{
			i = nextprime(i);
			printf("%d\n", i);
		}		
	}
	printf("Prime no\n");
	return 0;
}
int nextprime(int i){
	int j = 0;
	if( i == 2){
		primes[p++] = 3;
		return 3;
	}
	i += 2;
	while( primes[j] <= sqrt(i)) {
		if( i % primes[j] == 0)
			i += 2;
		else{
			j++;
		}
	}
	primes[p++] = i;
	return i;
}
