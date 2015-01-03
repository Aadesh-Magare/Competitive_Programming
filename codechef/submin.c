#include<stdio.h>
int find(int *a, int k, int n){
	int i, prev, aft, j, l;	
	int ans = 0;
	for(i = 0; i < n;){
		if(a[i] !=  k)
			i++;
		else{	
			prev = aft = 0;
			j = i-1;
			while(j >= 0 && a[j] > k){
				prev++;
				j--;
			}
			l = i+1;
			while(l < n && a[l] >= k){
				l++;
				aft++;
			}
			prev++;
			aft++;
			i++;
			ans += (prev * aft);
		}
	}
	return ans;
}
int main(){
	int n,i,q,k, a[64];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&q);
	while(q--){
		scanf("%d",&k);
		printf("%d\n",find(a, k, n));
	}    
	return 0;
}
