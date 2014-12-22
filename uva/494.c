#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
        long long int count, temp, c, b, i, j, n, q, inw;
        while((c = getchar())!= EOF){
                q = 0;
                while(c != '\n'){
                        inw = 0;
                        while(isalpha(c)){
                                if(!inw)
                                        q++;
                                inw = 1;
                                c = getchar();
                        }
                        if(c == '\n')
                                break;
                        c = getchar();
                }
                printf("%lld\n", q);
        }
        return 0;
}

