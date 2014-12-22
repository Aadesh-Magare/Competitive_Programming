#include<stdio.h>
#include<stdlib.h>
#define MAX 12
int divs[MAX] = {5, 25, 125, 625, 3125, 15625, 78125, 390625, 1953125, 9765625, 48828125, 244140625};
long long int checkdiv(long long int n){
	long long int count = 0, i;
	for(i = 0; i < MAX; i++){
		count += n/divs[i];
	}
	return count;
}
int main(){
	long long int n, i, temp, carry, t, count, j, degits;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		count = checkdiv(n);
		printf("%lld\n", count);
	}
	return 0;
}
