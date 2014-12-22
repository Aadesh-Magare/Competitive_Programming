#include<stdio.h>
int main(){
	int t, n, k, temp, even, odd;
	scanf("%d", &t);
	while(t--){
		even = odd = 0;
		scanf("%d %d", &n, &k);
		while(n--){
			scanf("%d", &temp);
			if(temp % 2 == 0)
				even++;
			else
				odd++;
		}
		if( k > 0){
			if( even >= k)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else{
			if(odd)
				printf("YES\n");
			else
				printf("NO\n");
		}	
	}
	return 0;
}
