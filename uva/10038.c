#include<stdio.h>
#include<string.h>
int main(){
	int array[3000], hash[3000];
	int i, j, k, n, temp, flag;
	while(scanf("%d", &n) != EOF){
		flag = 0;
		memset(hash, 0, sizeof(hash));
		for(i = 0; i < n; i++){
			scanf("%d", &temp);
			array[i] = temp;
		}
		for(i = 0; i < n-1; i++){
			temp = array[i] - array[i+1];
			if(temp < 0)
				temp = -1 * temp;
			hash[temp]++;
		}
		for(i = 1; i < n; i++){
			if(!hash[i]){
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("Not jolly\n");
		else
			printf("Jolly\n");
	}
	return 0;
}
