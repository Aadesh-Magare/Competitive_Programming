#include<stdio.h>
#include<string.h>
#define MAX 302
char ar[MAX];
int main(){
	int n, status, m, e, l, count = 0, i, j, t,allclear, del, flag;
	scanf("%d", &t);
	while(t--){
		memset(ar, 0, sizeof(ar));
		scanf("%s", ar);
		l = strlen(ar);
		allclear = 1;
		status = 3;
		del = flag = 0;
		for(i = 0, j = l-1; i <= j; ){
			if(ar[i] == ar[j]){
				i++;
				j--;
			}
			else{
				allclear = 0;
				m = i; n = j;
				if(ar[i] == ar[j-1]){
					j--;
					status = check(i, j);
					if(status == 1)
						break;
					i = m; j = n;
				}
				if(ar[i+1] == ar[j]){
					i++;
					status = check(i, j);
					break;
				}
				else{
					flag = 1;
					break;
				}
			}
		}
		if(allclear){
			printf("YES\n");
			continue;
		}
		if(flag == 1){
			printf("NO\n");
			continue;
		}
		if(status == 1){
			printf("YES\n");
			continue;
		}
		if(!status)
			printf("NO\n");
	}
	return 0;
}
int check(int i, int j){
	while(i <= j){
		if(ar[i] == ar[j]){
			i++; j--;
		}
		else
			return 0;
	}
	return 1;
}
