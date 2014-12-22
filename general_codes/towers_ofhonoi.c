#include<stdio.h>
#include<stdlib.h>
void towers(int n, int original, int spare, int final);
void transfer(int original, int final);
int main(){
	int n;
	int original = 1, spare = 2, final = 3;
	printf("Enter No of disks to be transferred:\n");
	scanf("%d", &n);
	if( n > 0)
		towers(n, original, spare, final);
	return 0;
}
void towers(int n, int original, int spare, int final){
	if( n > 1){
		towers(n-1, original, final, spare);
		transfer(original, final);
		towers(n-1, spare, original, final);
	}
	else
		transfer(original, final);
}
void transfer(int original, int final){
	printf("transfer from %d to %d \n", original, final);
}
