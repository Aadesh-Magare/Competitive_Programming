#include<stdio.h>
int main(){
	long long int i, n, b1, g1, c1, b2, g2, c2, b3, g3, c3;
	while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld ", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF){
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
