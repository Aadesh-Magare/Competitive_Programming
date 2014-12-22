#include<stdio.h>
#include<string.h>
int pi[5000000];
void prefix(char *a){
	int j, i;
	int len = strlen(a);
	i = 0;
	pi[0] = 0;
	printf("0");
	for(j = 1; j < len; j++){
		while(i > 0 && a[i] != a[j]){
			i = pi[i-1];
		}
		if(a[i] == a[j])
			i++;
		pi[j] = i;
		printf(" %d", pi[j]);
	}
	printf("\n");
}
int main(){
	char c, str[5000000];
	int i, j;
	while(scanf("%s", str)){
		if(strcmp(str, "End") == 0)
			break;
		prefix(str);
	}
	return 0;
}
