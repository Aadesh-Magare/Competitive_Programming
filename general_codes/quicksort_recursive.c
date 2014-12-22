#include<stdio.h>
#include<stdlib.h>
#define MAX 512
void quicksort(int *a, int , int);
int main(){
	int array[MAX];
	int i = 0, j = 0, k, l = 0, u, temp;
	while(scanf("%d", &temp) != EOF)
		array[i++] = temp;
	while(j < i)
		printf("%d ", array[j++]);
	printf("\n");
	u = i - 1;
	quicksort(array, l, u);
	for(j = 0; j < i; j++)
		printf("%d ", array[j]);
	printf("\n");
	return 0;
}
void quicksort(int *a, int l, int u){
	int i, j, temp, mid, x;
	i = l;
	j = u;
	if(l < u){
		mid = (l + u )/ 2;
		x = a[mid];
		while(a[i] <= x && i < u)		i++;
		while(a[j] > x && j > l)		j--;
		if(i < j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;		
		}
		temp = a[mid];
		a[mid] = a[j];
		a[j] = temp;
		quicksort(a, l, j-1);
		quicksort(a, j+1, u);
	}
}
