#include<stdio.h>
#include<string.h>
int main(){
	int t, n, i, j, temp, l, k, p[101], r[101], count;
	int pie[101], rack[101];
	scanf("%d", &t);
	while(t--){
		count = i = j = l = k = 0;
		memset(p, 0, sizeof(p));
		memset(r, 0, sizeof(r));
		memset(rack, 0, sizeof(rack));
		memset(pie, 0, sizeof(pie));
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			p[temp]++;
		}
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			r[temp]++;
		}
		for(i = 1; i <= 100; i++){
			while((p[i])){
				pie[l++] = i;
				p[i]--;
			}
			while((r[i])){
				rack[k++] = i;
				r[i]--;
			}
		}
		for(i = 0, j = 0; (i < l )&& (j < k); i++){
			while(j < k){
				if(pie[i] <= rack[j]){
					count++;
					j++;
					break;
				}
				j++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
