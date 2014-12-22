#include<stdio.h>///incomplete version remoal form sorted will be easier.
int main(){
	int a[512], n, l, i = 0, j, k;
	while(scanf("%d", &n) != EOF){
		a[i++] = n;
	}
	for(j = 1; j < i; j++){
		l = j;
		while(l != 0){
			if(a[j] == a[l-1]){
				for( k = j; k < i; k++){
					a[k] = a[k+1];
					i--; 
				}
			j--;
			}
			l--;
		}
	}
	for( k = 0; k < i; k++)
		printf("%d ", a[k]);
	return 0;
}
