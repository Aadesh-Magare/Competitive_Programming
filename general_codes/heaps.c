#include<stdio.h>
#define SWAP(a, b) (a = a+b, b = a-b, a = a - b)
int main(){
	int a[16], i, j = 0, k, l;
	while(scanf("%d", &i) != EOF)
		a[j++] = i;
	createheap(a, j-1);
	while(--j)
		printf("%d  ", a[j]);
	return;
}
createheap(int *a, int n){
	int parent, current = 1;
	while(current < n){
		if(a[current] < a[current+1])
			current++;
		parent = (current-1) / 2;
		if(a[current] > a[parent])
			SWAP(a[current], a[parent]);
		if(current % 2 != 0)
			current += 2;
		else
			current++;
	}
}
