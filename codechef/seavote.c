#include<stdio.h>
#define MAX 10004
int main(){
	int i, t, n, can;
	int b[MAX];
	double sum, max;
	scanf("%d", &t);
	while(t--){
		sum = can = 0;
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &b[i]);
			if(b[i] > 0)
				sum += b[i];
			else
				can++;	
		}
		if(sum < 100){
			printf("NO\n");
			continue;
		}
		else if(sum == 100){
			printf("YES\n");
			continue;
		}
		else{
			sum = 0;
			for(i = 0; i < n; i++){
				if(b[i] > 0){
					b[i]--;
					sum += b[i];
				}
			}
			if(sum >= 100)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
