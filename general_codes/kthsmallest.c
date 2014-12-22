#include<stdio.h>
int main(){
	int n, u, a[512], i = 0, x, j, k, l, temp;
	while(scanf("%d", &n) != EOF)
		a[i++] = n;
	printf("to find Kth smallest no enter value of k\n");
	scanf("%d", &k);
	l = 0; u = --i;
	while(l < u){
		x = a[k];
		i = l;
		j = u;
		while(i < k && j > k){
			while(a[i] < x ) 	i++;
			while(a[j] > x )	j--;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		if( k > j) l = i;
		if( k < i) u = j;	
	}
	for( temp = 0; temp < k; temp++)
		printf("%d ", a[temp]); 
	return 0;
}
