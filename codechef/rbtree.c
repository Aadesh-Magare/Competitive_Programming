#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 1000000000000
typedef struct level{
	char c;
	long long int lower, higher, nodes;
}level;
level arr[30];
int getlevel(long long int l){
	int i;
	if(!l)
		return 0;
	for(i = 0; i < 30; i++){
		if(arr[i].lower <= l && arr[i].higher >= l){
			//printf("level = %d\n", i);
			return i;
		}
	}
}
int main(){
	long int n, flag, temp, status, m, e, l, q, count, red1, xc, yc, red2, black1, black2;
	char s[4], odd, even;
	long int levels, x, y, diff, k, lm, ln, xl, yl, zl, ans, i;;
//	printf("%ld\n", (long int )log2(MAX + 1));
	arr[0].lower = arr[0].higher = arr[0].nodes = 1;
	for(i = 1; i < 30; i++){
		arr[i].nodes = pow(2, i);
		arr[i].lower = arr[i-1].higher + 1;
		arr[i].higher = arr[i].lower + arr[i].nodes - 1;
	}
	odd = 'R';
	even = 'B';
	scanf("%ld", &q);
	while(q--){
		scanf("%s", s);
		if(!strcmp(s, "Qi")){
			if(odd == 'B'){
				odd = 'R';
				even = 'B';
			}
			else{
				odd = 'B';
				even = 'R';
			}
		}
		if(!strcmp(s, "Qb") || !strcmp(s, "Qr")){
			scanf("%ld %ld", &x, &y);
			if(x > y){
				temp = x;
				x = y;
				y = temp;
			}
			xl = getlevel(x);
			yl = getlevel(y);
			diff = yl - xl;
			black1 = black2 = red1 = red2 = 0;
			lm = y;
			flag = 0;
			for(k = 0; k < diff; k++){
				y /= 2;
			}
			if(y == x)
				flag = 1;
			if(!flag){
			while((x / 2) != (y / 2)){	
				x /= 2;
				y /= 2; k++;
			}
			zl = getlevel(y/2);
			xc = xl - zl + 1;
			black1 = red1 = xc / 2;
			if(xc & 1){
				if(xl & 1){
					if(odd == 'B')
						black1++;
					else
						red1++;
				}
				else{
					if(even == 'B')
						black1++;
					else
						red1++;
				}
			}
			yc = yl - zl;
			black2 = red2 = yc / 2;
			if(yc & 1){
				if(yl & 1){
					if(odd == 'B')
						black2++;
					else
						red2++;	
				}
				else{
					if(even == 'B')
						black2++;
					else
						red2++;
				}
			}
			}
			else{
				xc = yl - xl + 1;
				black1 = red1 = xc / 2;
			if(xc & 1){
				if(yl & 1){
					if(odd == 'B')
						black1++;
					else
						red1++;
				}
				else{
					if(even == 'B')
						black1++;
					else
						red1++;
				}
			}
			}
			if(!strcmp(s, "Qb"))
				printf("%ld\n", black1+black2);	
			if(!strcmp(s, "Qr"))
				printf("%ld\n", red1+red2);	
		}
	}
	return 0;
}
