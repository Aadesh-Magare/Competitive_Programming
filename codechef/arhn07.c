#include<stdio.h>
#include<string.h>
int main(){
	int t, n, i, l1, l2, count;
	char s1[1004], s2[1004];
	scanf("%d", &t);
	while(t--){
		count = 0;
		scanf("%s", s1);
		scanf("%s", s2);
		l1 = strlen(s1);
		l2 = strlen(s2);
		if( l1 != l2){
			printf("-1\n");
			continue;
		}
		else{
			for(i = 0; i < l1; i++)
				if(s1[i] != s2[i])
					count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
