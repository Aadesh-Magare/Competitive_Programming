#include<stdio.h>
#include<math.h>
int main(){
	long long int n, x;
	scanf("%lld", &n);
	while(n != 0){
		x = sqrt(n);
		if(n ==  x * x)
			printf("yes\n");
		else
			printf("no\n");
		scanf("%lld", &n);	
	}
	return 0;
}
