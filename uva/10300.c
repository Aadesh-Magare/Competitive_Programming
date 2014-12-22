#include<stdio.h>
#include<stdlib.h>
int main(){
	long int n, k, j, i, s, p, count;
	int t,f;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &f);
		count = 0;	
		for(i = 0; i < f; i++){
			scanf("%ld %ld %ld", &s, &n, &p);
			if(n > s)
				n = s;
			count += s * p;
		}
		printf("%ld\n", count);
	}
	return 0;
}
