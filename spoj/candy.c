#include<stdio.h>
int main(){
	long long int sum, ans, avg;
	int t, i, n, a[10004];
	scanf("%d", &n);
	while(n > 0){
		sum = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			sum += a[i];
		}
		if(sum % n){
			printf("-1\n");
		}
		else{
			avg = sum / n;
			for(i = 0; i < n; i++){
				if(a[i] > avg)
					ans += a[i] - avg;	
			}
			printf("%lld\n", ans);
		}
		scanf("%d", &n);
	}
	return 0;
}
