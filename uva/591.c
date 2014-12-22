#include<stdio.h>
int main(){
	int array[64];
	int i, n, count, avg, sum, temp;
	scanf("%d", &n);
	count = 1;
	while(n){
		sum = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			sum += temp;
			array[i] = temp;
		}
		avg = sum / n;
		sum = 0;
		for(i = 0; i < n; i++){
			array[i] = array[i] - avg;
			if(array[i] > 0)
				sum += array[i];
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", count, sum);
		scanf("%d", &n);
		count++;
	}
	return 0;
}
