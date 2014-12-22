#include<stdio.h>
int main(){
	float bal;
	int x;
	scanf("%d %f", &x, &bal);
	if((x + 0.50) > bal){
		printf("%.2f", bal);
	}
	else if(x % 5 == 0){
		bal = bal - x - 0.50;
		printf("%.2f", bal);
	}
	else
		printf("%.2f", bal);
	return 0;
}
