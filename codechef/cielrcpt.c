#include<stdio.h>
int main(){
	long int t, p, count, max, qou;
	scanf("%ld", &t);
	while(t--){
		count = qou = 0;
		max = 2048;
		scanf("%ld", &p);
		while(max > 1){
			while(p >= max){
				qou = p / max;
				count += qou;
				p = p % max;
			}
			max = max / 2;
		}
		if(p)
			count++;
		printf("%ld\n", count);
	}
	return 0;
}
