#include<stdio.h>
#include<string.h>
int main(){
	char a[101][101];
	int b[101][101];
	int n, m, i, j, k, l, flag = 0;
	scanf("%d %d", &n, &m);
	long int count = 1;
	while(n != 0 && m != 0){
	memset(b, 0, sizeof(b));
	for(i = 0; i < n; i++){
		scanf("%s", a[i]);
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(a[i][j] == '*'){
				b[i][j] = '*';
				for(k = i-1; k <= i+1; k++){
					for(l = j-1; l <= j+1; l++){
						if(k >=0 && l >= 0){
							if(b[k][l] != '*')
								b[k][l]++;	
						}
					}
				}
			}
		}
	}
	if(flag)
		printf("\n");
	flag = 1;
	printf("Field #%ld:\n", count);
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(b[i][j] == '*')
				printf("%c", '*');
			else
				printf("%d", b[i][j]);
		}
		printf("\n");
	}
/*	printf("\n");*/
	count++;
	scanf("%d %d", &n, &m);
	}
	return 0;
}
