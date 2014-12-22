#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
#define MAXM(a, b) (a > b)?(a):(b)

long long int a[MAX];
long long int ind, d[MAX]; 
long long int max(long long int k){
	long long int j, b, c, i;
	if(k <= 1)
		return k;
	for(i = 0; i < ind; i++)
		if(a[i] == k)
			return d[i];
	j = max(k/4);
	b = max(k/3);
	c = max(k/2);
	a[ind] = k;
	d[ind++] = MAXM(k, j+b+c); 	
	return d[ind-1];
}
int main(){
	long long int n, k;
	while(scanf("%lld", &k) != EOF){
		ind = 0;
		printf("%lld\n", max(k));
	}
	return 0;
}
