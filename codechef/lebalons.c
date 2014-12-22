#include<stdio.h>
int main(){
	int t, i, j, n, m, c;
	double p, temp;
	scanf("%d", &t);
	for(i = 0; i < t; i++){
		p = n = m = temp = 0;
		scanf("%d %d", &n, &m);
		for(j = 0; j < n; j++){
			scanf("%d %lf", &c, &temp);
			p += temp;	
		}
		printf("%lf", p);
	}
	return 0;
}
