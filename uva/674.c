#include<stdio.h>
#include<string.h>
int a[7500] = {0};
int b[5] = {1, 5, 10, 25, 50};
void  change(){
	int i, j;
	a[0] = 1;
	for(i = 0; i < 5; i++)
		for(j = b[i]; j <= 7500; j++)
			a[j] += a[j-b[i]]; 
}
int main(){
	int n;
	change();
	while(scanf("%d", &n) != EOF){
		printf("%d\n", a[n]);
	}
	return 0;
}
