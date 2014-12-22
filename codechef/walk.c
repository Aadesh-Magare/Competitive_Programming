#include<stdio.h>
int main(){
	int t;
	long long int n, w, temp, i;
	scanf("%d", &t);
	while(t--){
		w = 0;
		scanf("%lld", &n);
		for(i = 0; i < n; i++){
			scanf("%lld", &temp);
		//	if(temp > max){
		//		max = temp;
		//		maxat = i;
		//	}
			temp = temp + i;
			if( temp > w)
				w = temp;
		}
		//if( maxat == 0 && max == w)
		//	printf("%lld", max);
		//else
		printf("%lld\n",w);
	}
	return 0;
}
