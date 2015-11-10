#include<iostream>
using namespace std;
int parent[50002];
int count;
void initparent(int n){
	for(int i = 1; i <= n; i++)
		parent[i] = i;
}
int find(int n){
	if(parent[n] != n)
		return find(parent[n]);
	return parent[n];
}
void unionfind(int n, int m){
	int x = find(n);
	int y = find(m);
	if(x == y){
		return;
	}
	else{
		parent[m] = n;
		count--;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, m, a[50002], i = 0, x, y, cas = 1;
	while(1){		
		cin >> x >> y;
		if(!x)
			break;
		count = x;
		initparent(x);
		for(i = 0; i < y; i++){
			cin >> n >> m;
			unionfind(n, m);
		}
		cout << "Case " << cas << ": " << count << "\n";
		cas++;
	}
	return 0;
}
