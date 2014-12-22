#include<stdio.h>
#include<string.h>
#define MAX 10004
int b[MAX];
int main(){
	int t, m, n, i, req, index1, index2, temp;
	scanf("%d", &t);
	while(t--){
		memset(b, 0, sizeof(b));
		scanf("%d %d", &m, &n);
		for(i = 1; i <= n; i++){
			scanf("%d", &temp);
			if(b[temp]){
				index1 = b[temp];
				index2 = i;
			}
			req = m - temp;
			if(req > 0)
				b[req] = i;
		}
		printf("%d %d\n", index1, index2);
	}
	return 0;
}
