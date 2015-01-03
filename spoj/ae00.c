#include<stdio.h>
int main(){
	int n, i, j;
	long long int ans = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j++){
			if(i * j <= n)
				ans++;
			else{
				break;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}
