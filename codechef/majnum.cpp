#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, a[100004], i, j, sum, count;
	bool flag;
	cin >> t;
	while(t--){	
		sum = 0;
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		flag = false;
		for(i = 0; i < n; i++){
			count = 1;
			while(a[i] == a[i+1] && i < n-1){
				count++;
				i++;
			}
			if(count > (n/2)){
				flag = true;
				break;
			}
		}
		if(flag)
			cout << a[i] << "\n";
		else
			cout << "NO MAJOR\n";
	}
	return 0;
}
