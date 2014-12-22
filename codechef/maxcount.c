#include<stdio.h>
#include<string.h>
int main(){
	int array[10001];
	int temp, i, t, n, max, pos, val;
	scanf("%d", &t);
	while(t--){
		max = 0;
		memset(array, 0, sizeof(array));
		scanf("%d", &n);
		while(n--){
			scanf("%d", &temp);
			array[temp]++;
			if(array[temp] > max){
				max = array[temp];
				val = temp;
			}
			else if(array[temp] == max && temp < val)
				val = temp;	
		}
		printf("%d %d\n", val, max);
	}
	return 0;	
}


