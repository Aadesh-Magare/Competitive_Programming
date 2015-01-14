#include<stdio.h>
#define MAXM 100004
int main(){
	int i, n, q, j, x, y, maxm;
	int map[MAXM];
	int a[MAXM];
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 1; i < n; i++){
		for(j = i+1; i <= n; j++){
			if(a[j] > a[i]){
				map[i] = j;
				break;
			}
		}
	}
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		scanf("%d %d", &x, &y);
		if(map[x] < y) 
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
