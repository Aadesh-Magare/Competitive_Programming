#include<stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define gc getchar_unlocked
long int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main(){
	long int n, b[100001], q, l, r, i, j, minl, maxl, max;
	double ans1, ans2;
	n = read_int();
	//scanf("%ld", &n);
	for(i = 0; i < n; i++)
	    b[i] = read_int();
		//scanf("%ld", &b[i]);
	q = read_int();
	while(q--){
		l = read_int();
		r = read_int();
		minl = b[l];
		maxl = b[l];
		for(j = l; j <= r; j++){
			if(b[j] < minl)
				minl = b[j];
			else if(b[j] > maxl)
				maxl = b[j];
		}
		if( l == 0 && r == n-1)
			ans1 = ans2 = maxl;
		else if( l != 0)
			max = b[0];
		else if( r != n-1)
			max = b[n-1];
		for(j = 0; j < l; j++)
			if(b[j] > max)
				max = b[j];
		for(j = r+1; j < i; j++)
			if(b[j] > max)
				max = b[j];
		ans1 = minl + max;
		ans2 = minl + ((maxl - minl) / 2);
		printf("%.1f\n", max(ans1, ans2));
	}
	return 0;
}
