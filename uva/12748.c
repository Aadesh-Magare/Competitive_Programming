#include<stdio.h>
#include<string.h>
#define MAX 102
typedef struct node{
	int x;
	int y;
	int r;
}node;
node c[MAX];
int main(){
	long int count, temp, b, i,r,  j, n, q, t, rx, ry, yx, yy, y, x, flag;
	scanf("%ld", &t);
	for(q = 1; q <= t; q++){
		scanf("%ld %ld", &n, &y);
		for(i = 0; i < n; i++){
			scanf("%ld %ld %ld", &rx, &ry, &r);
			c[i].x = rx;
			c[i].y = ry;
			c[i].r = r;
		}
		printf("Case %ld:\n", q);
		for(i = 0; i < y; i++){
			scanf("%ld %ld", &yx, &yy);
			flag = 0;
			for(j = 0; j < n; j++){
				temp = (c[j].x-yx) * (c[j].x - yx) +  (c[j].y-yy) * (c[j].y - yy);
					if(c[j].r * c[j].r >= temp){
						flag = 1;
						printf("Yes\n");
						break;
					}
			}
			if(!flag)
				printf("No\n");
		} 
	}
	return 0;
}
