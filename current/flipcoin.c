#include<stdio.h>
#include<string.h>
#define MAX 400004
#define gtc getchar_unlocked()
#define midn(n, m) ((n) + (m-n)/2)
int ar[MAX], lazy[MAX];
/*int midn(int n , int m){
	return (n + (m-n)/2);
}*/
int read_int()
{
    register int noRead=0,isneg=0;
    register char p=gtc;
    for(;p<48 || p>57;p=gtc){if(p=='-') isneg=1;}
    while(p>47 && p<58){ noRead = (noRead << 3) + (noRead << 1) + (p - '0');p=gtc;}
    if(isneg) noRead = -noRead;
    return noRead;
}
void fastWrite(int a)
{
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0)
	putchar_unlocked(snum[i--]);
	putchar_unlocked('\n');
}
int query(int *ar, int sb, int se, int qb, int qe, int index){
	int l , r, mid;
	if(lazy[index] != 0){
		ar[index] += lazy[index];
		if(sb != se){
			lazy[index*2] += lazy[index];
			lazy[index*2+1] += lazy[index];
		}
		lazy[index] = 0;
	}
	if(se < qb || sb > qe || sb > se || qb > qe)
		return 0;
	if(qb <= sb && qe >= se)
		return ar[index];
	mid = midn(sb, se);
	return query(ar, sb, mid, qb, qe, l) + query(ar, mid+1, se, qb, qe, r);
}
void updates(int *ar, int sb, int se, int qb, int qe, int index){
	int s, val;
	if(lazy[index] != 0){
		ar[index] += lazy[index];
		if(sb != se){
			lazy[index*2] += lazy[index];
			lazy[index*2+1] += lazy[index];
		}
		lazy[index] = 0;
	}
	if(sb > se || qb > se || qe < sb || qb > qe)
		return;
	
	if(sb >= qb && se <= qe){
		if(ar[index]){
			val = -1;
			ar[index] = 0;
		}
		else{
			val = 1;
			ar[index] = 1;
		}
		if(sb != se){
			lazy[index*2] += val;
			lazy[index*2+1] += val;
		}
		return;
	}
	updates(ar, sb, (sb+se)/2, qb, qe, index*2);
	updates(ar, 1+(sb+se)/2, se, qb, qe, index*2+1);
	ar[index] = ar[index*2] + ar[index*2+1];
}
void buildtree(int n, int i, int j){
	if(i > j)
		return;
	if(i == j){
		ar[n] = 0;
		return;
	}
	buildtree(n*2, i, (i+j)/2);
	buildtree(n*2+1, 1+(i+j)/2, j);
	ar[n] = ar[n*2] + ar[1+n*2];
}
int main(){
	int i, j, n, q, x, y, temp;
	n = read_int();
	q = read_int();
	for(i = 0; i < q; i++){	
		temp = read_int();
		x = read_int();
		y = read_int();
		if(temp)
			fastWrite(query(ar, 0, n-1, x, y, 0));
		else
			updates(ar, 0, n-1, x, y, 0);
	}
	return 0;
}
