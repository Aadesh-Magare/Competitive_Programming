#include<stdio.h>
int main(){
	int a[512], i = 0, j = 0, k = 0, temp, l, min, p;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	temp = 0;
	for(j = 0; j < i -1; j++){
		min = a[j];
		p = j;
		l = j + 1;
		while( l < i ){
			if( min > a[l]){
				min = a[l];
				p = l;
			}
			l++;
		}
		a[p] = a[j];
		a[j] = min;
	}
	for( temp = 0; temp <= j; temp++)
		printf("%d ", a[temp]);
	return 0;
}
