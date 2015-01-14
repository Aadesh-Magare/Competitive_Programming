#include<stdio.h>
#define MAX 1000004
int main(){
	int t, n, i, j, k, q;
	long long int x, y;
	scanf("%d", &t);
	char a[8] = {'0', 'd', 'h', 'a', 'p', 'u', 's', 'v'};
	while(t--){
		scanf("%lld", &x);
		y = x / 7;
		k = x % 7;
		for(i = 0; i < y; i++)
			printf("d");
		if(k) 
			printf("%c\n", a[k]);
		else
			printf("\n");
	}
	return 0;
}
