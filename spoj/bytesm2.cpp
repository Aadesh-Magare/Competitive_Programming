#include<bits/stdc++.h>
using namespace std;
#define MAX(a, b, c) (a > b ? (a > c ? a : c) : ( b > c ? b : c))
int main(){
	int t, h, w, i, j, k, ans;
	int a[102][102], dp[102][102];
	cin >> t;
	while(t--){
		cin >> h >> w;
		for(i = 0; i < h; i++)
			for(j = 0; j < w; j++)
				cin >> a[i][j];
		for(i = 0; i < h; i++){
			for(j = 0; j < w; j++){
				if(i == 0)
					dp[i][j] = a[i][j];
				else if(j > 0 && j < w-1)
					dp[i][j] = MAX(a[i][j] + dp[i-1][j], a[i][j] + dp[i-1][j-1], a[i][j] + dp[i-1][j+1]);
				else if(j == 0)
					dp[i][j] = MAX(0, a[i][j] + dp[i-1][j], a[i][j] + dp[i-1][j+1]);
				else if(j == w-1)
					dp[i][j] = MAX(0, a[i][j] + dp[i-1][j], a[i][j] + dp[i-1][j-1]);
			}
		}
		ans = 0;
		for(j = 0; j < w; j++)
			ans = (ans > dp[h-1][j] ? ans : dp[h-1][j]);
		cout << ans << endl;
	}
	return 0;
}

