#include<iostream>
#include<cstdio>
#define MOD 1000000007
using namespace std;
int gcd(int a, int b){
	int temp;
	while(a){
		temp = a;
		a = b % a;
		b = temp;
	}
	return b;
}
int ans[1000004], maxm;
int fib(int n){
	int i;
	if(ans[n])
		return ans[n];
	for(i = maxm; i <= n; i++)
		ans[i] = (ans[i-1] + ans[i-2]) % MOD;
	maxm = n+1;
	return ans[n];
}
int main(){
	ios_base::sync_with_stdio(false);
	int t, a, b, g;
	cin >> t;
	ans[0] = 0;
	ans[1] = 1;
	maxm = 2;
	while(t--){
		cin >> a >> b;
		g = gcd(a, b);
		printf("%d\n", fib(g));
	}
	return 0;
}
