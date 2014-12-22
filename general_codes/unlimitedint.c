#include<stdio.h>
#include<stdlib.h>
#define MAX 512			//written code for addition of numbers see if you can do the multiplication.

typedef struct Integer{
	char digit[MAX];
	int no;
}Integer;

void init(Integer *i){
	i->no = MAX - 1;
}
void getint(Integer *i){
	char ch;
	while((ch = getchar()) != EOF){
		i->digit[i->no] = ch - '0';
		i->no--;
	}
	printf("\n");
}
void printint(Integer *i){
	int j = MAX-1;
	while(j > i->no)
		printf("%c", (i->digit[j--] + '0'));
	printf("\n");
}
void swapdigits(Integer *i){
	int l = MAX-1;
	int m = i->no + 1;
	int temp;
	while(l > m){
		temp = i->digit[l];
		i->digit[l] = i->digit[m];
		i->digit[m] = temp;
		l--; m++;
	}
}
Integer addint(Integer *i, Integer *j){
	Integer c;
	init(&c);
	int l = i->no + 1; 
	int m = j->no + 1; 
	int k, carry = 0;
	while( l < MAX && m < MAX){
		k = i->digit[l++] + j->digit[m++] + carry;
		if(k < 10){
			c.digit[c.no--] = k;
			carry = 0;
		}
		else{
			c.digit[c.no--] = k % 10;	
			carry = k / 10;
		}
	}
	while(l < MAX)
		c.digit[c.no--] = i->digit[l++];
	while(m < MAX)
		c.digit[c.no--] = j->digit[m++];
	swapdigits(&c);
	return c;
}
Integer mulint(Integer *i, Integer *j){
	Integer c;
	init(&c);
}
int main(){
	Integer a, b, c;
	init(&a); init(&b);
	getint(&a); getint(&b);
	printint(&a); printint(&b);
	c = addint(&a, &b); 
	printint(&c);
	return 0;
}
