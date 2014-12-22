#include<stdio.h>
int main(){
	long long int t, n, temp, stem, k, flag;
	scanf("%lld", &t);
	while(t--){
		stem = 1;
		flag = 1;
		scanf("%lld", &k);
		for(n = 0; n < k; n++){
			scanf("%lld", &temp);
			if(temp > stem){
				flag = 0;
				break;	
			}
			stem = (stem - temp) * 2;
		}
		if(flag && !stem)
			printf("Yes\n");
		else
			printf("No\n");		
	}
	return 0;
}
