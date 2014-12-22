#include<stdio.h>
#include<string.h>
#define MAX 1001
int main(){
	long int count, temp, b, i, j, n, q, t;
	char s[1001];
	int ar[1001];
	scanf("%ld", &t);
	while(t--){
		memset(ar, 1, sizeof(ar));
		scanf("%ld", &n);
		scanf("%s", s);
		if(s[0] == '1'){
			ar[0] = ar[1] = 0;
		}
		for(i = 1; i < n-1; i++){
			if(s[i] == '1'){
				ar[i] = ar[i-1] = ar[i+1] = 0;
			}
		}
		if(s[n-1] == '1'){
			ar[n-2] = ar[n-1] = 0;	
		}
		count = 0;
		for(i = 0; i < n; i++){
			if(ar[i]){
				count++;	
			}
		}
		printf("%ld\n", count);
	}
	return 0;
}
