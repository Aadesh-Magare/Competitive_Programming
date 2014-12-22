#include<stdio.h>
int main(){
	int n, i, oldn, count;
	int a[52000];
	while(scanf("%d", &n) && n != 0){
		if(n > 2){
		for(i = 1; i <= n; i++){
			a[i] = i;
		}
		oldn = n;
		n++;
		count = 0;
		printf("Discarded cards:");
		i = 1;
		while(1){
			if(a[i]){
				printf(" %d,", a[i]);
				count++;
				a[i] = 0;
			}
			i++;
			a[n++] = a[i];
			a[i] = 0;
			i++;
			if(count == oldn - 2){
				break;
			}
		}
		for(i = 1; i < n; i++){
			if(a[i]){
				printf(" %d\n", a[i++]);
				break;
			}
		}
		printf("Remaining card: ");
		while(i < n){
			if(a[i]){
				printf("%d\n", a[i]);
				break;
			}
		}		
		}
		else{
			if(n == 1){
			printf("Discarded cards:\n");
			printf("Remaining card: 1\n");

			}
			if(n == 2){
			printf("Discarded cards: 1\n");
			printf("Remaining card: 2\n");
			}

		}
	}
	return 0;
}			
