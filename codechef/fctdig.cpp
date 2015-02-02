#include<iostream>
#include<algorithm>
#include<cmath>
#define MAX 100004
#define P 3.14159265
#define e 2.71828183
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, a[MAX], i;
	double count;
	cin >> t;
	while(t--){	
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		for(i = 0; i < n; i++){
			count = 0;
			while(a[i]){
				count += log10(a[i]);
				a[i]--;
			}
			count = floor(count);
			cout << 1 + count << " ";
		}
		cout << "\n";
	}
	return 0;
}
