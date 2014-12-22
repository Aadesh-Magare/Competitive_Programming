#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, i, j, count, l;
	list < char > mylist;
	list < char > ::iterator it;
	char c[100002];
	while(scanf("%s", c) != EOF){
		it = mylist.begin();
		l = strlen(c);
		for(i = 0; i < l; i++){
			if(c[i] == '[')
				it = mylist.begin();
			else if(c[i] == ']')
				it = mylist.end();
			else
				mylist.insert(it, c[i]);
		}
		for(it = mylist.begin(); it != mylist.end(); it++)
			printf("%c", *it);
		printf("\n");
		mylist.clear();
	}
	return 0;
}
