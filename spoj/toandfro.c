#include<stdio.h>
#include<string.h>
int main(){
	int n, i, j, m, l, row, col;
	char s[204];
	char a[200][200];
	scanf("%d", &n);
	while(n){
		scanf("%s", s);
		l = strlen(s);
		row = col = 0;
		for(i = 0; i < l; i++){
			if(col == n){
				row++;
				col = 0;
			}
			if(row % 2){
				a[row][n - col - 1] = s[i];	
				col++;
			}
			else{
				a[row][col++] = s[i];	
			}
				
		}
		for(i = 0; i < n; i++){
			for(j = 0; j <= row; j++){
				printf("%c", a[j][i]);
			}
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}

