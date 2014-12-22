#include<stdio.h>
#define MAX 32
#define TRUE 1
#define FALSE 0
int n, r;
int a[MAX];
int aval[MAX];
void sample(int k);
void permutation(int k);
void combination(int k);
void permutations(int k);
void initcombination(){
	a[0] = 0;
	combination(1);
}
void initpermutations(){
	int i;
	for(i = 1; i <= r; i++)
		aval[i] = TRUE;
	permutations(1);
}
void fastpermutations(){
	int i;
	for( i = 1; i <= n; i++)
		aval[i] = i;
	i = 1;
	permutation(i);
}
int main(){
	int k = 1;
	printf("Enter values for N and r\n");
	scanf("%d%d", &n, &r);
	//sample(k);
	//initcombination();
	//initpermutations();
	fastpermutations();
	return 0;
}
void permutation(int k){
	int i, temp, j;
	for( i = k; i <= n; i++){
		temp = aval[i];
		aval[i] = aval[k];
		aval[k] = temp;
		if(k < r)
			permutation(k+1);
		else{
			for(j = 1; j <= r; j++)
				printf("%d ", aval[j]);
			printf("\n");
		}
		temp = aval[k];
		aval[k] = aval[i];
		aval[i] = temp;
	}
}
void permutations(int k){
	int i, j;
	for( i = 1; i <= n; i++){
		if(aval[i]){
			a[k] = i;
			aval[i] = FALSE;
			if( k < r)
				permutations(k+1);
			else{
				for( j = 1; j <=r; j++)
					printf("%d", a[j]);
				printf("\n");
			}
			aval[i] = TRUE;	
		}
	}
}
void combination(int k){
	int j;
	a[k] = a[k-1];
	while( a[k] < (n - r + k)){
		a[k] = a[k] + 1;
		if( k < r)
			combination(k+1);
		else{
			for( j = 1; j <= r; j++)
				printf("%d", a[j]);
			printf("\n");
		}
	}
}
void sample(int k){
	int j;
	a[k] = 0;
	while( a[k] < n){
		a[k] += 1;
		if( k < r)
			sample(k+1);
		else{
			for( j = 1; j <= r; j++)
				printf("%d", a[j]);
			printf("\n");
		}
	}
}
