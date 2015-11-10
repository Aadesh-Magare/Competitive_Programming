#include<stdio.h>
int main(){
	int t, n, i, j, count, flag, x, y, k, p, c;
	scanf("%d", &t);
	while(t--){
		flag = 0;
		scanf("%d %d %d %d", &x, &y, &k, &n);
		count = x-y;
		for(i = 0; i < n; i++){
			scanf("%d %d", &p, &c);
			if(!flag){
				if(count <= p && c <= k)
					flag = 1;
			}
		}
		if(flag)
			printf("LuckyChef\n");
		else
			printf("UnluckyChef\n");
	}
	return 0;
}
