#include<stdio.h>
int seg[32 * 4];
int update(int *seg, int index, int pos, int val, int l, int h){
	int mid = (l + h)/2;
	if(pos < mid)
		seg[index] = update(seg, index*2, pos, val, l, mid);
	else if(pos > mid)
		seg[index] = update(seg, index*2+1, pos, val, mid+1, h);
	else
		seg[pos] = val;
	return seg[pos];
}
int initsegment(int *a, int index, int l, int h){
	if(l == h){
		seg[index] = a[l];
		return a[l];
	}
	int mid = (l + h)/2;
	seg[index] = initsegment(a, index*2, l, mid) + initsegment(a, index*2 + 1, mid+1, h);
	return seg[index];
}
int query(int *seg, int index, int l, int h, int u, int v){
	if(u <= l && v >= h)
		return seg[index];
	if(u > h || v < l)
		return 0;
	int mid = (l+h)/2;
	return query(seg, index*2, l, mid, u, v) + query(seg, index*2+1, mid+1, h, u, v);
}
int main(){
	int a[32], i = 0, n, temp, c;
	while(scanf("%d", &temp) != EOF)
		a[i++] = temp;
	n = i;
	initsegment(a, 1,  0, n);
	while(scanf("%d %d %d", &c, &i, &temp) != EOF){
		if(c)
			printf("%d\n", query(seg, 1, 0, n, i, temp));
		else
			update(seg, i, temp, 0, n);
	}
	return 0;
}
