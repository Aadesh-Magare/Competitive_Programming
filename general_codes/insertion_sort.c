#include<stdio.h>
int main(){
	int a[512], i = 0, j = 0, k = 0, l = 0, temp;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	temp = a[0];
	int minat = 0, x;
	for( j = 1; j < i; j++){
		if( a[j] < temp){
			temp = a[j];
			minat = j;
		}
	}
	j = a[0];
	a[0] = temp;
	a[minat] = j;
	for(j = 2; j < i; j++){
		x = a[j];
		l = j - 1;
		while( a[l] > x){
			a[l + 1] = a[l];
			l--;
		}
		a[l+1] = x;
	}
	for( j = 0; j < i; j++)
		printf("%d ", a[j]);
	return 0;
}
