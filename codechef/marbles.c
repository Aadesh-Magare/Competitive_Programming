#include<stdio.h>
#define MIN(a, b) (a < b) ? (a) : (b)
int main(){
	long long int t, i, s, k, n, r;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld", &n, &k);
		if(n == k){
			printf("1\n");
			continue;
		}
		s = 1;
		r = n-k;
		n = k+r-1;
		//with repetition choose diff from k
		r = MIN(r, n-r);
	//	if(r > n/2)
	//		r = n-r;
		for(i = 0; i < r; i++){
			s *= n-i;
			s /= i+1;
		}
		printf("%lld\n", s);
	}
	return 0;
}
