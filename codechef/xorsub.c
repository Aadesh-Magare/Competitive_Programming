#include <stdio.h>
#include <string.h>
int main(){
	int t, i, j, max, a[1024];
        int ans, n, k, m, temp, count1, count2;
        scanf("%d", &t);
	while(t--){
		memset(a, 0, sizeof(a));
                scanf("%d %d", &n, &k);
		max = k;
                for(i = 0; i < n; i++){
                        scanf("%d", &temp);
			a[temp]++;
                	for(j = 0; j < 1024; j++){
				if(a[j]){
					a[j ^ temp] = 1;
				}
			}
                }
                for(i = 0; i < 1024; i++){
			if(a[i] && ((i ^ k) > max))
				max = i ^ k;
		}
		printf("%d\n", max);
	}
	return 0;
}
