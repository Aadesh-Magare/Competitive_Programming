#include<stdio.h>
#include<string.h>
int main(){
	int t, n, k, i, count, prev;
	long int ans;
	char ar[100];
	scanf("%d", &t);
	while(t--){
		scanf("%s", ar);
		n = strlen(ar);
		prev = 1; count = 0; ans = 0;
		for(i = 0; i < n; i++){
			if(ar[i] == 'O'){
			if(!prev){
				count++;
				ans += count;
			}
			else{
				count = 1;
				prev = 0;
				ans += count;
			}	
			}
			else{
				prev = 1;
				count = 0;
			}
		}
		printf("%ld\n", ans);
	}
	return 0;
}
