#include<stdio.h>
#include<string.h>
int compare(void *a, void *b){
	long int n1 = *(long int *)a;
	long int n2 = *(long int *)b;
	return n1-n2;
}
long int l[100002]; 
int main(){
	long int count, temp, diff, i, j, n, q, s, p, m, d;
	scanf("%ld %ld", &n, &d);
	for(i = 0; i < n; i++)
		scanf("%ld", &l[i]);
	qsort(l, i, sizeof(long int), (void *)compare);
//	for(i = 0; i < n; i++)
//		printf("%ld ", l[i]);
	count = 0;
	for(i = 1; i < n; i++){
		if((l[i] - l[i-1]) <= d){
			count++;
			i++;
		}
	}
	printf("%ld\n", count);
	return 0;
}
