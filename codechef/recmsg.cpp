#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n;
	char a[1004];
	int i, j, count;
	long long int sum;
	cin >> t;
	while(t--){	
		sum = 0;
		cin >> a;
		count = strlen(a);
		for(i = 0; i < count; i++)
			sum += (a[i] - 'a' + 1);
		cout << sum << "\n";
	}
	return 0;
}
