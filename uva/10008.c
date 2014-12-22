#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 2048
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
	int n, no, i, j, s, carry, count;
	char *str, ch;
	int a[26];
	memset(a, 0, sizeof(a));
	int b[26];
	str = malloc(sizeof(char) * MAX);
	scanf("%d", &n);
	getchar();
		while((ch = getchar()) != EOF){
			if(ch <= 'Z' && ch >= 'A')
				a[ch - 'A']++;
			else if(ch <= 'z' && ch >= 'a')
				a[ch - 'a']++;
		}
		for(i = 0; i < 26; i++)
			b[i] = a[i];
		qsort(a, 26, sizeof(int), cmpfunc);	
		for(i = 25; i >= 0; i--){
			no = a[i];
			if(!no)
				break;
			j = 0;
			while(b[j] != no)
				j++;
			b[j] = 0;
			printf("%c %d\n", j + 'A', no);
		}
	
	return 0;
}
