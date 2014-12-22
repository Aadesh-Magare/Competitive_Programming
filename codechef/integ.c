#include<stdio.h>
int main(){
	long int n, i = 0, x, j, k,count, ans, temp;
	scanf("%ld", &n);
	long int array[n];
	for(k = 0; k < n; k++){
		scanf("%ld",  &temp);
		if(temp < 0)
			array[i++] = temp;
	}
	i--;
	ans = 0;
	scanf("%ld", &x);
	if(i <= x)
	printf("%ld\n", ans);	
	return 0;
}






