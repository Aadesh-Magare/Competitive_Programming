#include<stdio.h>
#define MAXN 100
/*
	the function finds binomial coeffiecnt in a effeient way without finding the factorial

	{n}	{n-1} + {n-1}		instead of {n}	  n!/ (n-k)! k!
	{k} = 	{k-1}	{k}			   {k} =  
*/
long int binomial(int n, int m){
	int i,j;
	long int a[MAXN][MAXN];
	for(i = 0; i <= n; i++)
		a[i][0] = 1;
	for(i = 0; i <= n; i++)
		a[i][i] = 1;
	for(i = 1; i<= n; i++)
		for(j = 1; j < i; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];
	return a[n][m];
}
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%ld",binomial(n, m));
	return 0;
}
