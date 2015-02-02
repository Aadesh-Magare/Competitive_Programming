#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t, n, a[10004], i = 0, j, sum, count = 0, countat;
	while(1){	
		cin >> n;
		if(cin.eof())
			break;
		for(i = count-1; i >= 0; i--){
			if(a[i] > n)
				a[i+1] = a[i];
			else{
				a[i+1] = n;
				count++;
				break;
			}
		}
		if(count == 0){
			a[0] = n;
			count++;
		}
		if(count & 1)
			cout << a[count/2] << "\n";
		else
			cout << (a[count/2] + a[count/2 - 1])/2 << "\n";
	}
	return 0;
}
