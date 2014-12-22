#include <bits/stdc++.h>
using namespace std;
map<long int, int> mymap;
map<long int, int>::iterator it;
int main(){
	int t, i, j;
        long int ans, n, m, temp, count1, count2;
        scanf("%d", &t);
	while(t--){
                scanf("%ld %ld", &n, &m);
                for(i = 0; i < n; i++){
                        scanf("%ld", &temp);
			mymap[temp]++;
                }
                for(i = 0; i < m; i++){
                        scanf("%ld", &temp);
			mymap[temp]--;
                }
		ans = 0;
		for(it = mymap.begin(); it !=  mymap.end(); it++){
			ans += abs(it->second);
		}
		printf("%ld\n", ans);
		mymap.clear();
	}
	return 0;
}
