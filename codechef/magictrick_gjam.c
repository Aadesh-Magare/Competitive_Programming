#include<stdio.h>
int matrix1[4], matrix2[4], temp;
void store( int c1, int matrix[4]){
		int i;
		if( c1 == 1){
                	for(i = 0; i < 4; i++)
                                scanf("%d", &matrix[i]);
			for( i = 0; i < 12; i++)
                                scanf("%d", &temp);
		}			
                else if ( c1 == 2){
                        for( i = 0; i < 4; i++)
                                scanf("%d", &temp);
                        for( i = 0; i < 4; i++)
                                scanf("%d", &matrix[i]);
                        for( i = 0; i < 8; i++)
                                scanf("%d", &temp);
                }
                else if( c1 == 3 ){
                        for( i = 0; i < 8; i++)
                                scanf("%d", &temp);
                        for( i = 0; i < 4; i++)
                                scanf("%d", &matrix[i]);
                        for( i = 0; i < 4; i++)
                                scanf("%d", &temp);
                }
                else if( c1 == 4 ){
                        for( i = 0; i < 12; i++)
                                scanf("%d", &temp);
                        for( i = 0; i < 4; i++)
                                scanf("%d", &matrix[i]);
                }
}
int main(){
	int t, c1, c2, k, i, j, temp1, temp2, found = 0, foundat;
	scanf("%d", &t);
	for( k = 1; k <= t; k++){
		found = 0;
		scanf("%d", &c1);
		store(c1, matrix1);
		scanf("%d", &c2);
		store(c2, matrix2);
		for( i = 0; i < 4; i++){
			for( j = 0; j < 4; j++){
				if(matrix1[i] == matrix2[j]){
					found++;
					foundat = i;
				}
			}
		}
		if(found == 1)
			printf("Case #%d: %d\n",k, matrix1[foundat]); 
		else if (found > 1)
			printf("Case #%d: Bad magician!\n", k);
		else if (found == 0)	
			printf("Case #%d: Volunteer cheated!\n", k);
	}		
	return 0;
}
