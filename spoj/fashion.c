#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
	int *c = (int *) a;
	int *d = (int *) b;
	return *c - *d;
}
int main(){
	long long int sum;
	int t, i, n, a[1004], b[1004];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for(i = 0; i < n; i++)
			scanf("%d", &b[i]);
		qsort(a, n, sizeof(int), compare);
		qsort(b, n, sizeof(int), compare);
		sum = 0;
		for(i = 0; i < n; i++)
			sum += a[i] * b[i];
		printf("%lld\n", sum);
	}
	return 0;
}
