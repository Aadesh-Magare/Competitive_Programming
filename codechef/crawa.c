#include<stdio.h>
int main(){
	long int t;
	long long int x, y;
	scanf("%ld", &t);
	while(t--){
		scanf("%lld %lld", &x, &y);
		if(x == 0){
			if(y == 0)
				printf("YES\n");
			else if( y % 2 == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if( x > 0){
			if( x % 2){
				if(( y <= (x + 1)) && (y >= -(x - 1)))
					printf("YES\n");
				else if( y % 2 == 0) 
					printf("YES\n");
				else
					printf("NO\n");
			}
			else{
				if(y % 2 == 0){
					if( (y >= x + 2) || (y <= -x ))
						printf("YES\n");
					else
						printf("NO\n");
				}
				else
					printf("NO\n");
			}
		}
		else{
			if( x % 2 == 0){
				if((y <= -x) && (y >= x)) 
					printf("YES\n");
				else if(y % 2 == 0)
					printf("YES\n");
				else
					printf("NO\n");

			}
			else{
				if( y % 2)
					printf("NO\n");
				else{
					if(( y >= (-x + 1)) || (y <= x-1))
						printf("YES\n");
					else 
						printf("NO\n");
				}	
			}
		}	
		
	}
	return 0;
}
