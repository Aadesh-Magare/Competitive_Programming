#include<stdio.h>
#define max(a, b) (a > b) ? (a) : (b)
int lcss(int *X, int  *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
  
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   return L[m][n];
}
int main(){
	int ar[102], br[102];
	int count, temp, a, b, i, j, n, q, m;
	scanf("%d %d", &n, &m);
	count = 1;
	while(n != 0 && m != 0){
		for(i = 0; i < n; i++)
			scanf("%d", &ar[i]);
		for(i = 0; i < m; i++)
			scanf("%d", &br[i]);
		q = lcss(ar, br, n, m);
		printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", count++, q);
		scanf("%d %d", &n, &m);
	}
	return 0;
}
