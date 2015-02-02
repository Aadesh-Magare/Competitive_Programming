#include<iostream>
#include<cstring>
using namespace std;
int bsearch(char a[1004][101], char *str, int beg, int end){
	int mid;
	if(beg < end){
	mid = (beg + end)/2;
	if(strcmp(str, a[mid]) < 0)
		return bsearch(a, str, beg, mid);
	else if(strcmp(str, a[mid]) > 0)
		return bsearch(a, str, mid+1, end);
	else
		return 1;
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	int t, n;
	char a[1004][101];
	char str[101];
	int i, j, count;
	long long int sum;
	cin >> t;
	while(t--){	
		cin >> n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		cin >> str;
		if(bsearch(a, str, 0, n))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
