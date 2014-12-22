#include<stdio.h>
#include<math.h>
int main(){
	long int k, a[1024], min, x, temp, y;
	int t, i = 0, j, n, l, z = 0, count = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%d%ld", &n, &k);
		min = k; i = 0;
		count = 0;
		while(n--){
			scanf("%ld", &temp);
			a[i++] = temp;
		}
		for( j = 0; j < i; j++){
			y = a[j] - k;
			for( l = j + 1; l < i; l++){
				x = abs(y + a[l]);
				if(x < min){
					min = x;
					count = 1;
				}
				else if( x == min)
					count++; 
				
			}
		}
		printf("%ld %d", min, count);
	}	
	return 0;
}
