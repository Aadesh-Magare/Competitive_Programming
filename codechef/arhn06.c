#include<stdio.h>
int main(){
	int n;
	long long int l, r, temp;
	scanf("%d", &n);
	while(n--){
		scanf("%lld %lld", &l, &r);
		while(l < r){
			temp = l + 1 | l;
			if(temp <= r)
				l = temp;
			else
				break;
		}
		printf("%lld\n", l);
	}
	return 0;
}
