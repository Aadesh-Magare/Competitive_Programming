#include<stdio.h>
int main(){
	int t, i, a, b;
	long int sum;
	scanf("%d", &t);
	for(i = 1; i <= t; i++){
		sum = 0;
		scanf("%d %d", &a, &b);
		if(a % 2)
		while(a <= b){
			sum += a;
			a += 2;
		}
		else{
			a++;
			while(a <= b){
				sum += a;
				a += 2;
			}
		}
		printf("Case %d: %ld\n", i, sum);
	}
	return 0;
}
