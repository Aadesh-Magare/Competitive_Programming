#include<stdio.h>
#include<math.h>
int main(){
        int x, n;
        long long int power = 1, next;
        scanf("%d%d", &x, &n);
	while(n-- > 0)
		power *= x;
	printf("%lld", power);
        return 0;
}

