#include<iostream>
#include<algorithm>
#define MAX 100004
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, a[MAX], i, j, sum, count;
	int fwd[MAX], bwd[MAX];
	bool flag;
	cin >> t;
	while(t--){	
		sum = 0;
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		fwd[0] = a[0]; bwd[n-1] = a[n-1];
		for(i = 1; i < n; i++)
			fwd[i] = fwd[i-1] + a[i];
		for(i = n-2; i >= 0; i--)
			bwd[i] = bwd[i+1] + a[i];
		flag = false;
		for(i = 1; i < n-1; i++){
		//	cout << "fwd = " << fwd[i-1] << " bwd = " << bwd[i+1] << endl;
			if(fwd[i-1] == bwd[i+1]){
				flag = true;
				break;
			}
		}
		if(flag)
			cout << a[i] << "\n";
		else
			cout << "NO EQUILIBRIUM\n";
	}
	return 0;
}
