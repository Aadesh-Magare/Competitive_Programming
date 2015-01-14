#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
	int dis[104][104];
	int ans[104][104];
	int t, a, b, g, n, m, k, u, v, x, y, z, q, c, i;
	scanf("%d %d %d", &n, &m, &k);
	memset(ans, 10000, sizeof(ans));
	for(i = 0; i < m; i++){	
		scanf("%d %d %d", &a, &b, &c);
		dis[a][b] = dis[b][a] = c;
		ans[a][a] = ans[b][b] = 0;
		ans[a][b] = ans[b][a] = c;
	}
	for(z = 1; z <= n; z++)
		for(y = 1; y <= n; y++)
			for(x = 1; x <= n; x++)
				if(ans[y][x] > ans[y][z] + ans[z][x])
					ans[y][x] = ans[y][z] + ans[z][x];
	scanf("%d", &q);
	while(q--){
		scanf("%d %d", &u, &v);
		if(ans[u][v] <= k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
