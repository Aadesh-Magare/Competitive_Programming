#include<stdio.h>
#include<math.h>
int main(){
	int x, y, i, n;
	scanf("%d %d", &x, &y);
	while(x > -1 || y > -1){
		if( x == 0 || y == 0){
			if(!x)
				printf("%d\n", y);
			else
				printf("%d\n", x);
		}
		else if(x == y)
			printf("1\n");
		else{	
			if(x > y){
				n = x;
				x = y;
				y = n;
			}
			x++;
			n = y / x;
			if(n * x != y)
				n++;
			printf("%d\n", n);
		}	
		scanf("%d %d", &x, &y);
	}
	return 0;
}
