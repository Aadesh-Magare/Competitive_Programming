#include<stdio.h>
#include<string.h>
#define MAX 102
int main(){
	int array[MAX];
	int t, n, k, i, j, max, temp;
	long int count, m;
	scanf("%d", &t);
	max = 0;
	while(t--){
		memset(array, 0, sizeof(array));
		count = 0;
		max = 0;
		scanf("%d %ld", &n, &m);
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			array[temp]++;
			if(temp > max)
				max = temp;
		}
		for(i = 0; i < MAX; i++){
			if(array[i]){
				count += (array[i] * (max - i));
			}
		}
		if(n > 1){
			if(!((m-count) % n))
				printf("Yes\n");
			else
				printf("No\n");
		}
		else
				printf("Yes\n");
	}
	return 0;
}
