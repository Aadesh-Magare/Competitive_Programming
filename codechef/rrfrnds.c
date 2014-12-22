#include<stdio.h>
#include<string.h>
	char a[2000][2000];
	int b[2000][2000] = {0};
	int c[2000] = {0};
int main(){
	int n, i, j, k;
	long long int count = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%s", a[i]);
	for(i = 0; i < n; i++){
		k = 0;
		for(j = 0; j < n; j++){
			if(a[i][j] == '1')
				b[i][k++] = j;
		}
		c[i] = k;
	}
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if(a[i][j] == '0'){
				for(k = 0; k < c[i]; k++){
					if(a[b[i][k]][j] == '1'){
						count++;
						break;
					}
				}
			}
		}
	}
	printf("%lld\n", count*2);
	return 0;
}
