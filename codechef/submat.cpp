#include<iostream>
#include<algorithm>
using namespace std;
inline int minm(int a, int b, int c){
	return (a < b ? (a < c ? a : c) : (b < c ? b : c));
}
inline int maxm(int a, int b){
	return (a > b ? a : b);
}
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, m, i, j, sum, count, ans[104][104];
	int a[104][104];
	bool flag;
	cin >> t;
	while(t--){	
		cin >> m >> n;
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				cin >> a[i][j];
		count = 0;
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++){
				if(i == 0 || j == 0)
					ans[i][j] = a[i][j];
				else{
					if(a[i][j] == 0)
						ans[i][j] = 0;
					else{
						ans[i][j] = minm(ans[i][j-1], ans[i-1][j], ans[i-1][j-1]) + 1;
						count = maxm(count, ans[i][j]);
					}
				}
		}
		cout << count << "\n";
	}
	return 0;
}
