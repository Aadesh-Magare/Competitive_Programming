#include<stdio.h>
#include<string.h>
#define MAX 1000001
int main(){
	long int count, temp, mid, t, legal, l, i, flag;
	scanf("%ld", &t);
	char a[MAX];
	while(t--){
		legal = flag = 0;
		i = 0;
		scanf("%s", a);
		l = strlen(a);
		l--;
		while(a[i] == '9'){
			i++; 
			if(i > l){
				flag = 1;
				break;
			}
		}
		i = 0;
		if(flag){
			a[i++] = '1';
			while(a[i] == '9')
				a[i++] = '0';
			a[i++] = '1';
			a[i] = '\0';
			legal = 1;
		}
		else
		while(i <= l){
			if(a[i] != a[l]){
				if(a[l] < a[i]){
					a[l] = a[i];
					legal = 1;
				}
				else{
					a[l] = a[i];
					legal = 0;
				}
			}
			i++; l--;
		}
		if(!legal){
				l = strlen(a) - 1;
				mid = l/2;	
				i = 0;
				while(a[mid-i] == '9'){
					a[mid-i] = a[l-(mid-i)] = '0';
					i++;
				}
				a[mid-i] = a[l-(mid-i)] = a[mid-i] + 1;
		}
		printf("%s\n", a);
	}
	return 0;
}
