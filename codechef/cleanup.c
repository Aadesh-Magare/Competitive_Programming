#include<stdio.h>
#include<string.h>
int main(){
	int count, temp, b, i, j, n, q, s, p, m;
	int t;
	int a[1001], c[1001], as[1001]; 
	scanf("%d", &t);
	while(t--){
		memset(a, 1, sizeof(a));
		scanf("%d %d", &n, &m);
		for(i = 0; i < m; i++){
			scanf("%d", &temp);
			a[temp] = 0;
		}
		s = p = 0;
		for(i = 1, j = 1; i <= n; i++){
			if(a[i]){
				if(j % 2)
					c[s++] = i;	
				else
					as[p++] = i;
				j++;
			}
		}
		for(i = 0; i < s; i++)
			printf("%d ", c[i]);
		printf("\n");
		for(i = 0; i < p; i++)
			printf("%d ", as[i]);
		printf("\n");
	}
	return 0;
}
