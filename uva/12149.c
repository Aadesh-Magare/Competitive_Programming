#include<stdio.h>
#include<string.h>
int main(){
	long int ans, a[10002], b[10002], n, m, temp;
	scanf("%ld", &n);
	while(n){
		ans =(n * (n+1) * (2*n+1)) / 6;
		printf("%ld\n",ans);
		scanf("%ld", &n);
	}
	return 0;
}
