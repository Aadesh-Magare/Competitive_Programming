#include<stdio.h>
#include<string.h>
#define MAXP 3265920
long int p[10] = {0, 9, 90, 738, 5274, 32490, 168570, 712890, 2345850, 5611770};
long long int findmax(char *a, int s){
	long long int t, count = 0, mul;
	int i;
	char ans[10];
	for(i = 0; i < s; i++){
		if(!i){
			mul = a[i] - '0';
			count++;
		}
		else{
			mul *= (a[i]- '0') + 1 - count;
			count++;
		}
	}
	mul += p[s-1];	
	printf("%lld\n", mul);
	return mul;
}
int main(){
	long long int t, j, temp, max, low;
	int m, h;
	char l[20], r[20];
	scanf("%lld", &t);
	while(t--){
		scanf("%s %s", l, r);
		m = strlen(l);
		h = strlen(r);
		if(h > 10)
			max = MAXP;
		else
			max = findmax(r, h);
		if(m > 10)
			low = MAXP;
		else
			low = findmax(l, m);
		printf("%lld\n", max-low+1);
	}	
	return 0;
}
