#include<stdio.h>
int main(){	// shell sort.... insertion sort with diminishing increment.
	int a[512], i = 0, j = 0, k = 0, l = 0, inc, temp, current, prev;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	inc = i - 1;
	while( inc > 1){
		inc = inc / 2;
		for( j = 0; j <= inc; j++){
			k = j + inc;
			while( k <= n && a[k] < a[j]){
				x = a[k];
				curret = k;
				prev = current - inc;
				while( prev >= j && a[k] !< a[j])
				a[k] = a[j];
				a[j] = temp;
			}
				



	return 0;
}
