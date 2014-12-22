#include<stdio.h>
short int count[52];
int main(){
	int t, i, ans;
	char c, s[201];
	scanf("%d", &t);
	while(t--){
		for(i = 0; i < 52; i++)
			count[i] = 0;
		i = 0;
		scanf("%s", s);
		for(i = 0; s[i] != '\0'; i++){
			if(s[i] >= 'a'){
				count[s[i] - 'a']++;
				//printf("%d\n", count[s[i] - 'a']);
			}
			else if(s[i] <= 'Z'){
				count[26 + (s[i] - 'A')]++;
			//	printf("%d\n", count[26 + (s[i] - 'A')]);
			}
		}
		ans = 0;
		for(i = 0; i < 52; i++){
			ans += ((count[i] / 2) + (count[i] % 2));
		}
		printf("%d\n", ans);
	}
	return 0;
}
