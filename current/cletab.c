#include<stdio.h>
#include<string.h>
int cust[402];
int seat[402];
int freq[402];
int kicked[402];
int check(int m){
	int i;
	for(i = 1; i < 402; i++){
		if(seat[i] && !freq[i]){
				return i;
		}
	}
	return 0;
}
int main(){
	int t, n, temp, m, number, j,c,  count, i, min;
	scanf("%d", &t);
	while(t--){
		memset(seat, 0, sizeof(seat));
		memset(freq, 0, sizeof(freq));
		memset(kicked, 0, sizeof(freq));
		scanf("%d %d", &n, &m);
		for(i = 0; i < m; i++){
			scanf("%d", &c);
			cust[i] = c;
			freq[c]++;
		}
		min = 0; count = 0;
		for(i = 0; i < m; i++){
			if(!(seat[cust[i]])){
				if(count < n){
					seat[cust[i]] = 1;
					min++;
					count++;
				}
				else{
					if((number = check(m))){
						seat[number] = 0;
						seat[cust[i]] = 1;
						min++;	
					}
					else{
							
						printf("i was here for %d\n", cust[i]);
						j = i+1; temp = 0;
						while(j < m){
							if(seat[cust[j]]){
								if(!kicked[cust[j]]){
									kicked[cust[j]] = 1;
									temp++;
									if(temp == count){
										seat[cust[j]] = 0;
										seat[cust[i]] = 1;
										min++;
										break;
									}
								}
							}
							j++;
						}
					}
				}
			}
			freq[cust[i]]--;
		}
		printf("%d\n", min);
	}
	return 0;
}
