#include<stdio.h>
int main(){
	int a[512], n, i = 0, j = 0, k = 0, l, temp, u, mid;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	i--;
	for( j = 0; j <= i; j++) 
		printf("%d ", a[j]);
	while(scanf("%d", &n) != EOF){
		int found = 0;
		l = 0; u = i;
		if( n > a[i] || n < a[0]){
			found = 1;
			printf("value NOT found\n");
		}
		else {
			while(l <= u){
				mid = (l + u )/ 2;
				if(n == a[mid]){
					printf("value found at %d position\n", mid+1);
					found = 1;
					break;	
				}
				else if( n > a[mid])
					l = mid + 1;
				else if( n < a[mid])
					u = mid - 1;
			}
		}
		if(!found)
			printf("value NOT found\n");
	}
	return 0;
}
