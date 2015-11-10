#include<iostream>
#include<cstdio>
#include<set>
#include<algorithm>
#define MAX 100004
using namespace std;
int main(){
	int t, n, i, j, k, temp;
	int a[MAX];
	long long int sum, miss, found;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &k);
		for(i = 0; i < k; i++)
			scanf("%d", &a[i]);
		sort(a, a+k);
		miss = found = 0;
		for(i = 0; i < k; i++){
			sum = ((a[i] * (a[i] - 1))/2) - miss;
			if(a[i] <= sum)
				miss += a[i];
				
			else{
				found = a[i];
				break;
			}
		}
		if(!found)
			found = (n * (n+1))/2 - miss + 1;
		if(found & 1)
			printf("Chef\n");
		else
			printf("Mom\n");
	}
	return 0;
}
