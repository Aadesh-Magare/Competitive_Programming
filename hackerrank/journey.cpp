#include<iostream>
#include<stdio.h>
#include<string.h>
#include<list>
using namespace std;
list <int> s[100002];
int visited[100002];
int vertices;
void dfs(long long int u){
	visited[u] = 1;
	vertices++;
	list<int>::iterator it;
	for(it = s[u].begin(); it != s[u].end(); it++){
		if(!visited[*it]){
			dfs(*it);
		}
	}
}
int main(){
	long long int n, i, I, temp, noc, a, b;
	long long int ans, total;
	scanf("%lld %lld", &n, &I);
	for(i = 0; i < I; i++){
		scanf("%lld %lld", &a, &b);
		s[a].push_back(b);
		s[b].push_back(a);
	}
	noc = 0;
	for(i = 0; i < n; i++){
		if(!visited[i]){
			vertices = 0;
			dfs(i);
			noc++;
			visited[i] = vertices;
		}
	}
	ans = 0;
	total = n * (n-1);
	total /= 2;
	for(i = 0; i < n; i++){
		temp = visited[i];
		ans += ((temp * (temp-1)) / 2);
	}
	printf("%lld\n", total - ans);
	return 0;
}
