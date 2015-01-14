#include<stdio.h>
int main(){
	int t, n, i, j, k, a1, a2, a3;
	while(1){
		scanf("%d %d %d", &a1, &a2, &a3);
		if(!a1 && !a2 && !a3)
			break;
		if(a2-a1 == a3 - a2)
			printf("AP %d\n", a3 + a3 - a2);
		else
			printf("GP %d\n", a3 * (a3 / a2));
	}
	return 0;
}
