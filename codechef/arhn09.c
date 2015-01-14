#include<stdio.h>
#define MAX 1000004
int main(){
	int t, n, i, j, k, q, x, y;
	char s[8];
	int a[MAX], ans[MAX];
	scanf("%d %d", &n, &q);
	for(i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	ans[0] = 0;
	ans[1] = a[1];
	for(i = 2; i <= n; i++)
		ans[i] = ans[i-1] + a[i];
	for(i = 1; i <= q; i++){
		scanf("%s %d %d", s, &x, &y);
		printf("%d\n", ans[y] - ans[x-1]);
	}
	return 0;
}
