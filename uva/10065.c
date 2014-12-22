#include<stdio.h>
int main(){
	int a[16], n, i, j, min, count, sum;
	char c;
	scanf("%d", &n);
	while(n){
	for(i = 0; i < n; i++){
		count = 0;
		for(j = 0; j < 25; j++){
			c = getchar();
			if(c == 'X')
				continue;
			if(c == ' ')
				count++;
		}
		getchar();
		a[i] = count;
	}
	min = a[0];
	for(j = 0; j < i; j++){
		if(a[j] < min)
			min = a[j];
	}
	sum = 0;
	for(j = 0; j < i; j++){
			a[j] = a[j] - min;
			sum += a[j];
	}
	printf("%d\n", sum);
	scanf("%d", &n);
	}
	return 0;
}
