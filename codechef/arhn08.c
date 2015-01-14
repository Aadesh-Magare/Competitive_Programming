#include<stdio.h>
#include<string.h>
int main(){
	int n, i;
	long long int count;
	scanf("%d", &n);
	count = 1;
	for(i = 1; i < n; i++)
		count *= n-i;
	count += n;
	printf("%lld\n", count);
	return 0;
}
