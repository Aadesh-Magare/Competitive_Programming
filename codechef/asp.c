#include<stdio.h>
#include<stdlib.h>
int main(){
	int t, n, a[1000004], i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(i = 0; i < n-1; i++){
			if(a[i] > a[i+1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		int flag = 0;
		for(i = 0; i < n-1; i++){
			if(a[i] > a[i+1])
				flag = 1;
		}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
