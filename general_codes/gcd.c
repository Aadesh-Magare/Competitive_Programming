#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", gcd(n, m));
	return 0;
}
int gcd(int n, int m){
	if( n % m == 0)
		return m;
	return gcd(m, n%m);
}
