#include<stdio.h>		//not working check it out whne you have time try to use different logic instead of this its from geeksforgeeks
void radix(int *a, int n, int exp);
int getmax(int *a, int n){
	int i = 0, max = a[0];
	for(i = 1; i <= n; i++)
		if(a[i] > max)
			max = a[i];
	return max;
}
void radixsort(int *a, int n){
	int i, j = 0, k;
	int max = getmax(a,n);
	for(i = 1; max/i > 0; i *= 10)
		radix(a, n, i);
}
void radix(int *a, int n, int exp){
	int i, j, k;
	int sorted[64];
	int count[10] = {0};
	for(j = 0; j <= n; j++)
		count[(a[j]/exp) % 10]++;
	for(j = 1; j <= n; j++)
		count[j] += count[j-1];
	for(j = n; j >= 0; j--){
		k = count[(a[j]/exp) % 10]--;
		sorted[k-1] = a[j];
	} 
	for(i = 0; i <= n; i++)
		a[i] = sorted[i];
}
int main(){
	int a[64], i =0, j, k;
	while(scanf("%d", &j) != EOF)
		a[i++] = j;
	radixsort(a, i-1);
	while(--i)
		printf("%d  ", a[i]);
	return 0;
}

