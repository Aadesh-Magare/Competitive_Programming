#include<stdio.h>
int main(){
	int t, n, i, j, array[100][100];
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		for(i = 0; i < t; i++){
			for(j = 0; j <= i; j++){
				scanf("%d", &array[i][j]);
			}
		}
		i--;
		while(i){
			j = 0;
			while(j < i){
				if(array[i][j] > array[i][j+1])
					array[i-1][j] += array[i][j];
				else
					array[i-1][j] += array[i][j+1];
				j++;
			}
			i--;
		}
		printf("%d\n", array[0][0]);
	}
	return 0;
}
