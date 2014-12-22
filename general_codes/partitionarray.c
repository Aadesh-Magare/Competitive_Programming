#include<stdio.h>
#define NO 25
int main(){
	int n;
	int a[512], i, j, k, temp;
	while(scanf("%d", &n) != EOF)
		a[i++] = n;
	temp = i;
	i = 0; j = temp - 1;
	while(a[i] <= NO && i < j)	i++;
	while(a[j] > NO && j > i)	j--;
	while(i < j){
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		while(a[i] <= NO && i < j)	i++;
		while(a[j] > NO && j > i)	j--;
	}
	for(i = 0; i < temp; i++)
		printf("%d ", a[i]);
	return 0;
}
