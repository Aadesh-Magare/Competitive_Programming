#include<stdio.h>
#include<math.h>
/*
	raising an number to higher power using log and exp functions.
*/
int main(){
	float a, b;
	scanf("%f %f", &a ,&b);
	printf("%lld", (long long int)ceil(exp(b*log(a))));
	return 0;
}
