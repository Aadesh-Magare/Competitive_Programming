#include<stdio.h>
int main(){
	//program to store very big intergers like 200 digits in the form of a array //
	long long int n, i, temp;
	scanf("%lld", &n);
	int a[300], carry, degits, j;
	a[0] = 1;
	carry = 0;
	degits = 1;
	for(i = 1; i <= n; i++){
		for(j = 0; j < degits; j++){
			temp = a[j] * i + carry;
			a[j] = temp % 10;
			carry = temp / 10;
		}
		while(carry){
		a[degits] = carry % 10;
		carry = carry / 10;
		degits++;
		}
	}
	while(degits--)
		printf("%d", a[degits]);
	printf("\n");
	return 0;	
}
