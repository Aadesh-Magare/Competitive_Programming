#include<stdio.h>
int main(){
	int t, n, i, p1 = 0, p2 = 0, diff, temp, winner, tp1, tp2;
	scanf("%d", &t);
	diff = 0;
	for( i = 0; i < t; i++){
		scanf("%d %d", &tp1, &tp2);
		p1 += tp1;
		p2 += tp2;
		if( p1 > p2){
			temp = p1 - p2;
			if(temp > diff){
				diff = temp;
				winner = 1;
			}
		}
		else if(p2 > p1)
			{
			temp = p2 - p1;
			if(temp > diff){
                                diff = temp;
                                winner = 2;
                        }	
		}
	}
	printf("%d %d", winner, diff);
	return 0;
}
