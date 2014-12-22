#include<stdio.h>
#define MAX(a, b) (a > b) ? (a) : (b)
int main(){
	long int ans, best_sum, curr_sum, temp;
	int i, n, t, j, a[100000], lowest, allneg;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		ans = 0;
		allneg = 1;
		best_sum = 0;
		curr_sum = 0;
		lowest = a[0];
		for(i = 0; i < n; i++){
			if(a[i] > 0){
				allneg = 0;
				ans += a[i];
			}
			else{
				if(a[i] > lowest)
					lowest = a[i];
			}
			temp = curr_sum + a[i];
			if(temp > 0){
				curr_sum = temp;
				best_sum = MAX(best_sum, curr_sum);
			}
			else{
				curr_sum = 0;
			}
		}
		if(allneg){
			best_sum = ans = lowest;
		}
		printf("%ld %ld\n", best_sum, ans);
	}
	return 0;
}
