#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
long int a[MAX];
int main(){
	long int t, i, temp;
	scanf("%ld", &t);
	for(i = 0; i < t; i++){
		scanf("%ld", &temp);
		a[temp]++;
	}
	for(i = 0; i < MAX; i++)
		while(a[i]--)
			printf("%ld\n", i);
	return 0;
}
