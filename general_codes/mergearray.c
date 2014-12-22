#include<stdio.h>
int main(){
	int a[512], b[512], i = 0, j = 0, k = 0, l = 0, temp, m, n;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	while(scanf("%d", &temp) != EOF)
		b[j++] = temp;
	m = --i;
	n = --j;
	int c[ m + n + 1];
	if(a[m] <= b[0]){
		while( k <= m)
			c[k] = a[k++];
		while( l <= n)
			c[k++] = b[l++];
	}
	else {
		if(a[m] < b[n]) { //a will finish first 
			i = 0; j = 0;
			while( i <= m ){
				if( a[i] <= b[j] )
					c[k++] = a[i++];
				else
					c[k++] = b[j++];
			}
			while( j <= n)
				c[k++] = b[j++];
		}
		else{ //b will finish first
			i = 0; j = 0;
			while( j <= n){
				if( a[i] <= b[j])
					c[k++] = a[i++];
				else	
					c[k++] = b[j++];
			}
			while(i <= m)
				c[k++] = a[i++];
		}
	}
	for( i = 0; i < k; i++)
		printf("%d ", c[i]);
	return 0;
}
