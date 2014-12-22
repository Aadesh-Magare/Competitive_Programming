#include<stdio.h>
#include<string.h>
int main(){
	int t, i, j, count, g, n, l, size, m;
	char c[104], ch;
	while((scanf("%d", &g)) && g != 0){
		scanf("%s", c);
		l = strlen(c);
		size = l / g;
		for(i = 0; i < l;){
			for(j = i + 0, m = i+size-1; j <= m; ){
				ch = c[j];
				c[j] = c[m];
				c[m] = ch;
				j++;
				m--;
			}
			i += size;	
		}
		printf("%s\n", c);
	}
	return 0;
}
