#include<stdio.h>	//better version v2
#include<math.h>	// checking till sqrt(n) and excluding evens
#define SET 1
#define CLEAR 0
int main(){
	int n = 3, i, j = 1;
	int flag = SET;
	while(n <= 1000){
		for( i = 2; i <= (int)sqrt(n); i++){
			if( n % i == 0){
				flag = CLEAR;
				break;
			}
		}
		if(flag){
			j++;
			printf("%d\n", n);
		}
		n = n + 2;
		flag = SET;
	}
	printf("%d\n", j);
	return 0;
}
