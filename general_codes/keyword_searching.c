#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main(int argc, char *argv[]){
	int i = 0, j = 0, k, l = 0, m = 0, count = 0;
	char *word, *text, c;
	word = (char *)malloc(sizeof(char)* 512);
	text = (char *)malloc(sizeof(char)* 2048);
	while((c = getchar()) != EOF){
		text[i++] = c;
	}
	text[i] = '\0';
	while((c = getchar()) != '\n'){
		word[j++] = c;
	}
	word[j] = '\0';
	l = strlen(word);
	m = strlen(text);
	i = 0; j = 0;
	while(text[i] != '\0'){
		if(text[i] == word[j]){
			i++; j++;
			if(word[j] == '\0'){
				if(text[i] == ' ' || text[i] == '\n' || text[i] == '\t' || text[i] == ',' || text[i] == '.'){
					count++;
				}
				else{
					while(text[i] != ' ')
						i++;
				}
				j = 0;
			}
		}
		else{
			i++;
			if(j)
				j = 0;
		}
	}
	printf("%d", count);
	return 0;
}
		
