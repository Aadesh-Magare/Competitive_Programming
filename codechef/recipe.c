#include<stdio.h>
int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}
int main(){
	int n, x, y, t, e, f, i, j, ans;
	int a[64];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		ans = a[0];
		for(i = 1; i < n; i++){
			ans = gcd(ans, a[i]);
		}
		if(ans == 1){
			for(i = 0; i < n; i++)
				printf("%d ", a[i]);
			printf("\n");
		}
		else{
			for(i = 0; i < n; i++)
				printf("%d ", a[i] / ans);
			printf("\n");
		}
	}
	return 0;
}
