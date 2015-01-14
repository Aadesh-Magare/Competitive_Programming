#include<stdio.h>
#include<math.h>
int main(){
	int arr[32], ans[32];
	int n, i, j;
	scanf("%d", &n);
	arr[1] = 2;
	for(i = 2; i < 34; i++){
		arr[i] = arr[i-1] * 2;
	}
	j = 0;
	while(n){
		i = 1;
		while(arr[i] <= n)
			i++;
		n = n-arr[i-1];
		ans[j++] = arr[i-1];
	}
	for(i = j-1; i >= 0; i--)
		printf("%d ", ans[i]);
	return 0;
}
