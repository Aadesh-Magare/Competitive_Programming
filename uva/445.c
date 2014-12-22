#include<stdio.h>
#include<string.h>
#define MAX 132
int main(){
	char a[MAX];
	char t, c;
	long int count, temp, b, i, j, q, sum;
	c = getchar();
	while(c != EOF){
		while(c != '\n' && c != '!' && c != EOF){
			sum = 0;
			while(c >= '0' && c <= '9'){
				sum += c - '0';
				c = getchar();
			}
			for(i = 0; i < sum; i++){
				if(c == 'b')
					printf(" ");
				else if(c == '!')
					printf("\n");
				else
					printf("%c", c);
			}
			c = getchar();
		}
		if(c == EOF)
			break;
		printf("\n");
		c = getchar();
	}
	return 0;
}
