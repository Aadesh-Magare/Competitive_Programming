#include<stdio.h>
int main(){
	int t;
	long long int n;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &n);
		if(n % 2)
			printf("BOB\n");
		else
			printf("ALICE\n");
	}
	return 0;
}
