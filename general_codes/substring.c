#include<stdio.h>
#include<stdlib.h>
int main(){
	char *text, *ntext, *pat, *npat, c;
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, temp = 0;
	text = (char *)malloc(sizeof(char) * 512);
	ntext = (char *)malloc(sizeof(char) * 512);
	pat = (char *)malloc(sizeof(char) * 512);
	npat = (char *)malloc(sizeof(char) * 512);
	while((c = getchar()) != '\n')
		text[i++] = c;
	while((c = getchar()) != '\n')
		pat[j++] = c;
	while((c = getchar()) != '\n')
		npat[n++] = c;
	i--; j--; n--;
	
	while( k <= (i - j + 1)){
		if( text[k] == pat[l]){
			k++; l++;
			if( l > j){
				l = 0;
				while( l <= n){
					ntext[temp++] = npat[l++];
				}
				l = 0;
			}
		}
		else{
			if(!l)
				ntext[temp++] = text[k++];
			else{
				k = k - l;
				ntext[temp++] = text[k++];
				l = 0;
			}
		}
	}
	while( k <= i)
		ntext[temp++] = text[k++];		  	
	printf("%s", ntext);
	return 0;
}
