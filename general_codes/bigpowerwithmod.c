#include<stdio.h>
#include<math.h>
long long int pwr(long long int n, long long int m, long long int p){
	if(m == 0)
		return 1;
	if(m == 1)
		return n;
	long long int x;
	x = pwr(n, m/2, p);
	x = ((x%p) * (x%p)) % p;
	/*
		x = (x * x) % p;
	 */
	if(m & 1)
		return ((x%p) * (n%p)) % p;
	/* 
		return (x * n) % p;
	*/
	return (x);
}
int main(){
	long long int i, j, b, p, m;
	while(scanf("%lld %lld %lld", &b, &p, &m) != EOF){	
		printf("%lld\n", pwr(b, p, m));
	}
	return 0;
}
