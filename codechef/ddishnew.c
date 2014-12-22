#include<stdio.h>
#define MAX 32
int lower[MAX], upper[MAX], aval[MAX];
long int ans, ans1, ans2;
void combinations(int j);
long int findcombinations(int m, int j);
int main(){
	long int t;
	long long int l, r, i, j;
	scanf("%ld", &t);
	while(t--){
		scanf("%lld %lld", &l, &r);
		i  = MAX-1; j = MAX-1;
		while(l){
			upper[i] = l % 10;
			l = l / 10;
			i--;
		}
		ans1 = findcombinations(MAX-1, i+1);
	//	printf("%ld\n", ans1);
		while(r){
			upper[j] = r % 10;
			r = r / 10;
			j--;
		}
		ans2 = findcombinations(MAX-1, j+1);
		printf("%ld\n", ans2-ans1);
	}
}
long int findcombinations(int m, int j){
	ans = 0; int i;
	for(i = 1; i < MAX-1; i++)
		aval[i] = 1;
	combinations(j);
	return ans;
}
void combinations(int j){
	int i;
	for(i = 1; i <= upper[j]; i++){
		if(aval[i]){
			aval[i] = 0;
			if(j < MAX-1)
				combinations(j+1);
			else
				ans++;
			aval[i] = 1;
		}
	}
}
