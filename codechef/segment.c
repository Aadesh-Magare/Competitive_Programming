#include<stdio.h>
#include<math.h>
double rounds(double x, double k){
	double child, temp, prev, n, p, levelno;
	levelno = floor(log2(k)) + 1;
	n = pow(2, levelno);
	prev = pow(2, levelno-1);
	temp = 1.0;
	temp = temp + (k - prev) * 2;
	if(temp > x){
		child = temp / n;
		child = child * x;
	}
	else{
		child = x / n;
		child = child * temp;
	}
	return child;
}
int main(){
	int t;
	double x, k;
	double ans;
	scanf("%d", &t);
	while(t--){
		scanf("%lf %lf", &x, &k);
		ans = rounds(x, k);
		printf("%lf\n", ans);
	}
	return 0;
}
