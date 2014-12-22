#include<stdio.h>
int compare(void *a, void *b){
	int *c = (int *)a;
	int *d = (int *)b;
	
	return *c - *d;
}
int main(){
	int n, i, m, t, my, max, j, count;
	int a[54000], b[101];
	scanf("%d", &t);
	while(t--){
		count = 0;
		scanf("%d %d", &n, &m);
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		my = b[m];
		qsort(b, n, sizeof(int), compare);
		max = n-1;
		j = 0;
		while(1){
			while(a[j] < b[max]){
				a[i++] = a[j];
				if(j == m)
					m = i-1;
				a[j++] = 0;
			}
			if(a[j] == my)
				break;
			a[j++] = 0;
			count++;
			max--;
		}
		for(i = j; ;i++){
			if(a[i] == my){
				if( i == m){
					printf("%d\n", count+1);
					break;
				}
				count++;
			}
		}
	}
	return 0;
}			
