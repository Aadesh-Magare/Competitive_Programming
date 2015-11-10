#include<stdio.h>
#include<string.h>
#define MAX 100001
int arr[MAX];
int main(){
	long int count, temp, a, b, i, j, n, q;
	scanf("%ld %ld", &n, &q);
	for(i = 0; i < q; i++){	
		count = 0;
		scanf("%ld %ld %ld", &temp, &a, &b);
		if(!temp){
			while(a <= b)
				arr[a++]++;
		}
		else{
			for(j = a; j <= b; j++)
				if(!(arr[j] % 3))
					count++;
			printf("%ld\n", count);
		}
	}
	return 0;
}
