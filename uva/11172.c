#include<stdio.h>
int main(){
	int t;
	long long int count, temp, a, b, i, j, n, q;
	scanf("%d", &t);
	while(t--){
		scanf("%lld %lld", &a, &b);
		if(a < b){
			printf("<\n");
		}
		else if( a > b){
			printf(">\n");
		}
		else{
			printf("=\n");
		}
	}
	return 0;
}
