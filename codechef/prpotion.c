#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 102
int main(){
	int t, i, j, k, l, m, R, G, B, at;
	long int r[MAX], g[MAX], b[MAX], minr, minb, ming, max, count, min;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d", &R, &G, &B, &m);
		minr = ming = minb = max = 0;
		for(i = 0; i < R; i++){
			scanf("%ld", &r[i]);
			if(r[i] > minr)
				minr = r[i];
		}
		for(i = 0; i < G; i++){
			scanf("%ld", &g[i]);
			if(g[i] > ming)
				ming = g[i];
		}
		for(i = 0; i < B; i++){
			scanf("%ld", &b[i]);
			if(b[i] > minb)
				minb = b[i];
		}
		if(minr > ming){
			if(minr > minb){
				max = minr;
				at = 1;
			}
			else{
				max = minb;
				at = 3;
			}
		}
		else{
			if(ming > minb){
				max = ming;
				at = 2;
			}
			else{
				max = minb;
				at = 3;
			}
		}
		count = 0;
		while(count < m){
		    count++;
		    switch(at){
			    case 1:
				    for(i = 0; i < R; i++){
					    if(r[i])
						    r[i] /= 2;
				    }
				    minr /= 2;
				    break;
			    case 2:
				    for(i = 0; i < G; i++){
					    if(g[i])
						    g[i] /= 2;
				    }
				    ming /= 2;
				    break;
			    case 3:
				    for(i = 0; i < B; i++){
					    if(b[i])
						    b[i] /= 2;
				    }
				    minb /= 2;
				    break;
		    }
		    if(minr > ming){
			    if(minr > minb){
				    max = minr;
				    at = 1;
			    }
			    else{
				    max = minb;
				    at = 3;
			    }
		    }
		    else{
			    if(ming > minb){
				    max = ming;
				    at = 2;
			    }
			    else{
				    max = minb;
				    at = 3;
			    }
		    }
		}

		printf("%ld\n", max);
	}
	return 0;
}
