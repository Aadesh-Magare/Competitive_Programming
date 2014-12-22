#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main(int argc, char *argv[]){
	int i, j, k, temp,count = 0, line = 0;
	char word[256], text[1024], ch;
	strcpy(word, argv[2]);
	FILE *fp;
	fp = fopen(argv[1], "r");
	if(fp == NULL){
		perror("error opening file");
		exit(errno);
	}
	while(fgets(text, 1024, fp) != 0){
		i = 0; j = 0; line++;
		while( text[i] != '\n'){
			if(text[i] != word[0]){
				while(text[i] != ' ')
					i++;
			}
			else{
				while( count < strlen(word) && text[i] == word[j]){
					i++;
					j++;
					count++;
				}
				if(count == strlen(word) && text[i] == ' ' || text[i] == '\n' || text[i] == ',' || text[i] == '.')
					printf("word found at line no %d", line);	
			}
			while( text[i] != ' ')
				i++;
			while(text[i] == ' ')
				i++;
		}
	}
	return 0;
}
	
