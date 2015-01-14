#include<stdio.h>
#define MAXM 100004
#define MAX(a, b) (a > b ? a : b)
int seg[MAXM * 4];
int initsegment(int *a, int index, int l, int h){
	if(l == h){
		seg[index] = a[l];
		return a[l];
	}
	int mid = (l + h)/2;
	seg[index] = MAX(initsegment(a, index*2, l, mid), initsegment(a, index*2 + 1, mid+1, h));
	return seg[index];
}
int query(int *seg, int index, int l, int h, int u, int v){
	if(u <= l && v >= h)
		return seg[index];
	if(u > h || v < l)
		return 0;
	int mid = (l+h)/2;
	return MAX(query(seg, index*2, l, mid, u, v), query(seg, index*2+1, mid+1, h, u, v));
}
int main(){
	int i, n, temp, c, q, x, y, maxm;
	int a[MAXM];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	initsegment(a, 1,  0, n);
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		scanf("%d %d", &x, &y);
		maxm = query(seg, 1, 0, n, x-1, y-2);
		if(a[x-1] < maxm)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
