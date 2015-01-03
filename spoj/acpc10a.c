#include<stdio.h>
int main(){
	int a1, a2, a3;
	scanf("%d %d %d", &a1, &a2, &a3);
	while(a1 != 0 || a2 != 0 || a3 != 0){
			if(a3 - a2 == a2 - a1)
				printf("AP %d\n", (a3 + a3 - a2));
			else if(a3 / a2 == a2 / a1)
				printf("GP %d\n", (a3 * (a3/a2)));
		scanf("%d %d %d", &a1, &a2, &a3);
	}
	return 0;
}
