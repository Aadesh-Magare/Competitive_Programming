#include<stdio.h>
#define MAX 1000000007
int main(){
	long long int t, n;
	short int decimal[32], i;
	long long int answer, next, final;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		next = 4;
		i = 31;	//upper limit of array
		answer = 1;
		final = 1;
		while(n){
			decimal[i] = n % 2;
			n = n/2;
			i--;	
		}
		i++;
		answer = decimal[i];
		while(i < 31){
			i++;
			answer = answer * 10 + decimal[i]; 
		}
		while(answer){
			if( answer % 2 == 1){
				final *= next;
		//		final = final % MAX;
			}
			answer = answer / 2;
			next *= next;
		}
		printf("%lld\n", final);
	} 
	return 0;
}
