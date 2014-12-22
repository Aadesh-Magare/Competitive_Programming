#include<stdio.h>
#include<math.h>
#define TRUE 1
#define CLEAR 0
int ispalindrome(long int i){
	long int sum = 0, j = i;
	while(i){
		sum = (sum * 10) + ( i % 10);
		i = i / 10;
	}
	if(sum == j)
		return 1;
	return 0;
}	
/*	short int array[32], set = TRUE;
	int j = 0, k;
	while(i){
		array[j++] = i % 10;
		i = i / 10;
	}
	j--; k = 0;
	while(k <= j){
		if(array[k] == array[j]){
			k++; j--;
		}
		else{
			set = CLEAR;
			break;
		}
	}
	if(set)
		return 1;
	return 0;
*/

int main(){
	long int n, i;
	long int array[100000];
	int j = 2, k, set = TRUE;
	array[0] = 2;
	array[1] = 3;
	array[2] = 5;
	scanf("%ld", &n);
	if( n > 98689){
		printf("1003001\n");
		return 0;
	}
	for(i = 7; ; i+= 2){
		set = TRUE;
		for( k = 0; array[k] <= (int)sqrt(i); k++){
			if(i % array[k] == 0){
				set = CLEAR;
				break;
			}
		}
		if(set){
			array[++j] = i;
			if(i >= n)
				if(ispalindrome(i)){
					printf("%ld", i);
					break;
				}
		}
	}
	return 0;
}
