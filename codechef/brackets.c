#include <stdio.h>
#include <string.h>
#define gchar getchar_unlocked()
int main()
{
	int t, b, m, i, l;
	char c[100004];
	scanf("%d\n", &t);
	while(t--){
		b = 0;
		m = -1;
		scanf("%s", c);
		l = strlen(c);
		for(i = 0; i < l; i++){
			if(c[i] == '(')
				b++;
			else if(c[i] == ')')
				b--;
			if(b > m)
				m = b;
		}
		for(i = 0; i < m; i++)
			putchar('(');
		for(i = 0; i < m; i++)
			putchar(')');
		putchar('\n');
	}
	return 0;
}
