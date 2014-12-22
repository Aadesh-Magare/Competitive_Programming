#include<stdio.h>
#define gc getchar_unlocked
long int readint() {
	long int n = 0;
	long int ch = gc();
	while (ch < '0' || ch > '9') ch = gc();
	while (ch >= '0' && ch <= '9') {
		n = (n << 3) + (n << 1) + (ch - '0');
		ch = gc();
	}
	return n;
}
int main(){
	long int t, d, n, l, m, i, diff;
	t = readint();
	while(t--){
		d = 0;
		n = readint();
		l = readint();	
		for(i = 1; i < n; i++){
			m = readint();	
			if(m <= l)
				l = m;
			else{
				diff = m - l;
				if(diff > d)
					d = diff;
			}
		}
		if(d)
			printf("%ld\n", d);
		else
			printf("UNFIT\n");
	}
	return 0;
}
