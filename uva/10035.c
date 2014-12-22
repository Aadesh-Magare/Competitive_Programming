#include<stdio.h>
int main(){
	long long int a, b;
	int i, j, s, carry, count;
	scanf("%lld %lld", &a, &b);
	while(a != 0 || b != 0){
		carry = count = 0;
		while(1){
			if(a){
				i = a % 10;
				a /= 10;
			}
			else 
				i = 0;
			if(b){
				j = b % 10;
				b /= 10;
			}		
			else
				j = 0;
	
			s = i + j + carry;
			if(s > 9){
				count++;
				carry = 1;
			}
			else
				carry = 0;
			if(a == 0)
				if(b == 0)
					break;
		}
		if(count > 1)		
			printf("%d carry operations.\n", count);
		else if(count == 1)
			printf("1 carry operation.\n");
		else
			printf("No carry operation.\n");
		
		scanf("%lld %lld", &a, &b);
	}
	return 0;
}
