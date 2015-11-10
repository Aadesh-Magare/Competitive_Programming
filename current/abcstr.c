#include<stdio.h>
#include<string.h>
#define EQL(a,b,c) ((a) == (b)) ? ((b) == (c)) : (0)
long long int a[3];
int main(){
	char str[1000004];
	long long int i, count, m, j;
	while(scanf("%s", str) != EOF){
		memset(a, 0, sizeof(a));
		m = strlen(str);
		if(m < 3){
			printf("0\n");
			continue;
		}
		a[(str[0] - 'A')]++;
		for(i = 1; i < m; i++){
			a[str[i] - 'A']++;
			if(i >= 3){
				a[str[i-3] - 'A']--;
			}
			if(EQL(a[0], a[1], a[2]))
				count++;
		} 
		printf("%lld\n", count);
	}
	return 0;
}
