#include<stdio.h>
#include<string.h>
#define MAX 100000
long long int raise(int n, int p){
	if(p == 1)
		return n;
	if(p == 0)
		return 1;
	long long ans = raise(n, p / 2);
	if(p & 1){
		ans = ans * ans * 2;
		if(ans > MAX)
			ans = ans % MAX;
		return ans;
	}
	else{
		ans = ans * ans;
		if(ans > MAX)
			ans = ans % MAX;
		return ans;
	}
}
int main(){
	long long int n, i, I, temp, noc, a, b;
	long long int ans, total, t;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		printf("%lld\n", raise(2, n) - 1);
	}
	return 0;
}
