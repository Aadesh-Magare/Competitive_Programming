#include<stdio.h>
#define MAX 100004
int gcd(int a, int b){
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}
int gcdold(int a, int b){
	int t;
	while(a){
		t = a;
		a = b % a;
		b = t;
	}
	return b;
}
int main(){
	int i, t, n, q, l, r, j, ans;
	int a[MAX], fwd[MAX], bwd[MAX];
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &q);
		for(i = 1; i <= n; i++){
			scanf("%d", &a[i]);
		}
		fwd[1] = a[1];	bwd[n] = a[n];
		for(i = 1; i < n; i++)
			fwd[i+1] = gcd(fwd[i], a[i+1]);
		for(i = n; i > 0; i--)
			bwd[i-1] = gcd(bwd[i], a[i-1]);
		for(i = 1; i <= q; i++){
			scanf("%d %d", &l, &r);
			if(l == 0)
				printf("%d\n", bwd[r+1]);
			if(r == n)
				printf("%d\n", fwd[l-1]);
			else
				printf("%d\n", gcd(fwd[l-1], bwd[r+1]));
		}
	}
	return 0;
}
