#include<stdio.h>
#include<string.h>
int main(){
	int array1[26], array2[26], i = 0, t, no, chef, wrong, c;
	scanf("%d", &t);
	c = getchar();
	while(t--){
		wrong = 0;
		no = 0;
		chef = 0;
		memset(array1, 0, sizeof(array1));
		memset(array2, 0, sizeof(array2));
		while((c = getchar()) != ' '){
			array1[c - 'a']++;
		}
		while((c = getchar()) != '\n'){
			array2[c - 'a']++;
		}
		for(i = 0; i < 26; i++){
			if(array1[i] != array2[i]){
				wrong = 1;
			}
			if((array1[i] == 0 &&  array2[i] != 0 )|| (array1[i] != 0 && array2[i] == 0)){
				no = 1;
				break;
			}
		}
		if(wrong && no != 1){	
			for( i = 0; i < 26; i++){
				if(array1[i] > 0 && array2[i] > 0){
					chef = 1;
				}
			}
		}
		if(!wrong)
			printf("YES\n");
		else if(chef)
			printf("NO\n");
		if(no)
			printf("YES\n");
	}
	return 0;
}
