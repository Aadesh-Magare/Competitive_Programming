#include<stdio.h>
long int powern(int x, int n){
	long int ans;
	if(n == 1)
		return x;
	if(n % 2){
		ans = powern(x, (n-1)/2);
		ans = ans * ans * x;
	}
	else{
		ans = powern(x, n/2);
		ans = ans * ans;
	}
	return ans;
}
int main(){
	int n, x;
	scanf("%d %d" , &x, &n);
	printf("%ld", powern(x, n));
	return 0;
}
