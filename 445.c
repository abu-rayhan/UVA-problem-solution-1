#include<string.h>
#include<stdio.h>

int main(){
    int i,j,n=0,k,l;
    char s[1000];
    while(gets(s)!=EOF){
        l=strlen(s);
        for(i=0;i<l;i++){
            switch(s[i]){
                case 'b':
                    for(j=1;j<=n;j++)printf(" ");
                    n=0;
                    break;
                case '1':
                    n+=1;break;
                case '2':n+=2;break;
                case '3':n+=3;break;
                case '4':n+=4;break;
                case '5':n+=5;break;
                case '6':n+=6;break;
                case '7':n+=7;break;
                case '8':n+=8;break;
                case '9':n+=9;break;
                case '!':printf("\n");break;
                default:
                    for(j=1;j<=n;j++)printf("%c",s[i]);
                    n=0;
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
