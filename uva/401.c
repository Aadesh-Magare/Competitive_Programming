#include<stdio.h>
#include<string.h>
void check(char *string, int i){
	char mirror[32], c;
	int notpal, notmir, start, end;
	notpal = notmir = 0;
	start = 0;
	end = i-2;
	while(start < end){
		if(string[start] == string[end]){
			start++;
			end--;
		}
		else{
			notpal = 1;
			break;
		}
	}
	start = 0;
	end = i-2;
	while(start <= end){
		c = string[start];
		if(c == 'A' || c == 'H' || c == 'I'|| c == 'M'|| c == '0'|| c == '1' || c == '8' || c == 'O'|| (c >= 'T' && c <= 'Y'))
			mirror[start] = c;
		else if( c == 'E')
			mirror[start] = '3';
		else if( c == 'J')
			mirror[start] = 'L';
		else if( c == 'L')
			mirror[start] = 'J';
		else if( c == 'S')
			mirror[start] = '2';
		else if( c == 'Z')
			mirror[start] = '5';	
		else if( c == '2')
			mirror[start] = 'S';	
		else if( c == '3')
			mirror[start] = 'E';	
		else if( c == '5')
			mirror[start] = 'Z';	
		else{
			notmir = 1;
			break;
		}
		start++;
	}
	if(!notmir){
		start = 0;
		while(start <= end){
/*		for(j = 0; j < i-1; j++){*/
			if(mirror[start] == string[end]){
			 	start++;
				end--;
			}
			else{
				notmir = 1;
				break;
			}
				
		}
	}
	if(!notpal && !notmir)
		printf("%s -- is a mirrored palindrome.\n\n", string);
	else if(!notmir)
		printf("%s -- is a mirrored string.\n\n", string);
	else if(!notpal)
		printf("%s -- is a regular palindrome.\n\n", string);
	else if(notpal)
		printf("%s -- is not a palindrome.\n\n", string);
}

int main(){
	char string[32], ch;
	int i;
/*
	while((ch = getchar_unlocked()) != EOF){
		string[i++] = ch;
		if( ch == '\n'){
			check(string, i);	
			i = 0;	
		}
	}*/

	while(scanf("%s", string) != EOF){
		check(string, strlen(string) + 1);
	}
	return 0;
}
