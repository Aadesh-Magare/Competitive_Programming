#include<stdio.h>
#include<string.h>
int main(){
	int t, a[26], i, j, count;
	char c;
	scanf("%d", &t);
	getchar();
	while(t--){
		memset(a, 0, sizeof(a));
		count = 0;
		while((c = getchar()) != '\n'){
			if(a[c - 'a'] == 0){
				count++;
				a[c - 'a']++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
