#include<stdio.h>
#include<stdlib.h>

int main(){
	int myarray[26] = { 1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
	int t, i;
	char *str;
	char ch;
	str = (char *)malloc(sizeof(char) * 100);
	scanf("%d", &t);
	for( i = 0; i < t; i++){
		scanf("%s", str);
		int j = 0, holes = 0;
		while((ch = str[j++]) != '\0'){
			holes += myarray[ch - 65];
		}
		printf("%d\n", holes);
	}
	return 0;
}
