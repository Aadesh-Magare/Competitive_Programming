#include<stdio.h>
#include<string.h>
int main(){
	long int n, k;
	int count, temp, i;
	scanf("%ld %ld", &n, &k);
	char c[16];
	short int b[n+1];
	count = 0;
	memset(b, 0, sizeof(b));
	for(i = 0; i < k; i++){
		scanf("%s", c);
		if(strcmp(c, "CLICK") == 0){
			scanf("%d", &temp);
			if(!b[temp]){
				b[temp]++;
				count++;
			}
			else{
				b[temp] = 0;
				count--;
			}
		}
		else{
			memset(b, 0, sizeof(b));
			count = 0;
		}
		printf("%d\n", count);
	}
	return 0;
}
