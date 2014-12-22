#include<stdio.h>
#include<string.h>
int main(){
	int n, a[10001], i, j, k, temp, t;
	scanf("%d", &t);
	long long int cost;
	while(t--){
		scanf("%d", &n);
		cost = 0;
		memset(a, 0, sizeof(a));
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			a[i] = temp;
		}
		for(i = 0; i < n; i++){
			if(a[i] > 0){
				j = i;
				k = 0;
			while(a[i] != 0){
				while(a[j] >= 0){
					j++;
					k++;
				}
				if(-1 * a[j] >= a[i]){
					cost += k * a[i];
					a[j] += a[i];
					a[i] = 0;
				}
				else{
					cost += k * a[j] * -1;
					a[i] += a[j];
					a[j] = 0;
				}
			}
			}
			else{
					j = i;
					k = 0;
				while(a[i] != 0){
					while(a[j] <= 0){
						j++; k++;
					}
					if(-1 *a[i] >= a[j]){
						cost += k * a[j];
						a[i] += a[j];
						a[j] = 0;
					}
					else{
						cost += k * a[i] * -1;
						a[j] += a[i];
						a[i] = 0;
					}
				}
			}
		}
		printf("%lld\n", cost);
	}
}
