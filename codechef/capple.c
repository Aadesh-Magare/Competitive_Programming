#include<stdio.h>
#include<string.h>
int main(){
	int t, n, i, count, temp;
	int a[100002];
	scanf("%d", &t);
	while(t--){
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			a[temp]++;
		}
		count = 0;
		for(i = 0; i < 100002; i++)
			if(a[i])
				count++;
		printf("%d\n", count);
	}
	return 0;
}
