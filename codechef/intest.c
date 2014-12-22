#include<stdio.h>
int main(){
	long int n, k, temp, count;
	int i;
	scanf("%ld %ld", &n, &k);
	for(i = 0; i < n; i++){
		scanf("%ld", &temp);
		if(temp % k == 0)
			count++; 
	}
	printf("%ld", count);
	return 0;
}
