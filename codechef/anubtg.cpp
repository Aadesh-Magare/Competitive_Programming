#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, a[1004], i, j, sum;
	cin >> t;
	while(t--){	
		sum = 0;
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for(i = n-1; i >= 4; ){
			sum += a[i] + a[i-1];
			i -= 4;
		}
		for(; i >= 0; ){
			if(i > 0)
				sum += a[i] + a[i-1];
			else
				sum += a[i];
			i -= 4;
		}
		cout << sum << endl;
	}
	return 0;
}
