#include<stdio.h>	//better version v3
#include<math.h>	// dividing by prime no only till 
#define SET 1
#define CLEAR 0
int main(){
	int *a, i, j = 2, n, k;
	a = (int *)malloc(sizeof(int) * 10000000);
	a[0] = 2;
	a[1] = 3;
	a[2] = 5;
	int flag = SET;
	scanf("%d", &n);
	for(i = 7; i <= n; i += 2){
		for( k = 0; a[k] <= (int)sqrt(i); k++){
			if( i % a[k] == 0){
				flag = CLEAR;
				break;
			}
		}
		if(flag){
			a[++j] = i;
		}
		flag = SET;
	}
	printf("%d\n", j+1);
//	while( j >= 0)
//		printf("%d\n", a[j--]);
	return 0;
}
