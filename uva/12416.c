#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1024
/*
char *getlines(char *str){
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n' || ch != EOF)
		str[i++] = ch;
	str[i] = ch;
	return str;
}*/
int main(){
	char ch;
	long int a[MAX], none, done;
	long int i, j, count, k;
/*	str = (char *)malloc(sizeof(char) * 2048);*/
	while((ch = getchar())!= EOF){
		memset(a, 0, sizeof(a));
		i = k = count = 0;
		while(ch != '\n' && ch != EOF){
			if(ch == ' '){
				while(ch == ' '){
					a[i]++;
					ch = getchar();
				}
				i++;
			}
			ch = getchar();
		}
/*		for(j = 0; j < i; j++)
		printf("%d ", a[j]);*/
		none = 1;
		while(none){
			none = done = 0;
		for(j = 0; j < i; j++){
			if(a[j] > 1){
				done = 1;
				a[j] = (a[j] % 2) + a[j] / 2;
				if(a[j] > 1)
					none = 1;
			}
		}
			if(done)
			count++;
		}
		printf("%ld\n", count);
	}
	return 0;
}
