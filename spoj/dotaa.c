#include<stdio.h>
#include<string.h>
int main(){
	int t, n, m, d, i, j, count, temp;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &n, &m, &d);
		count = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			if(temp > d){
				count += temp/d;
				if(!(temp % d))
					count--;
			}
		}
		if(count >= m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
