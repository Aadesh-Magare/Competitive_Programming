#include<stdio.h>
#include<string.h>
int search(char *pre, char c, int n){
	int i;
	for(i = 0; i < n; i++)
		if(pre[i] == c)
			return i;
	return -1;
}
void postorder(char *pre, char *in, int len){
	int root;
	root = search(in, pre[0], len);
	if(root != 0)
		postorder(pre+1, in, root);
	if(root != len-1)
		postorder(pre+root+1, in+root+1, len-root-1);
	printf("%c", pre[0]);	
}
int main(){
	char pre[26], in[26];
	int i, j, k, temp;
	while(scanf("%s%s", pre, in) != EOF){
		postorder(pre, in, strlen(pre));
		printf("\n");	
	}
	return 0;
}
