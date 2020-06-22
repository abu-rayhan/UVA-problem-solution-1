#include<stdio.h>
#include<string.h>

int main(){
    int t,i,l,j;
    char s[8001];
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++){
        while(gets(s)){
            l=strlen(s);
            if(l==0)break;
            for(i=0;s[i]!='\0';i++){
                if(s[i]=='0')printf("O");
                else if(s[i]=='1')printf("I");
                else if(s[i]=='2')printf("Z");
                else if(s[i]=='3')printf("E");
                else if(s[i]=='4')printf("A");
                else if(s[i]=='5')printf("s");
                else if(s[i]=='6')printf("G");
                else if(s[i]=='7')printf("T");
                else if(s[i]=='8')printf("B");
                else if(s[i]=='9')printf("P");
                else printf("%c",s[i]);
            }
            printf("\n");
        }
        if(j<t)
        printf("\n");
    }
    return 0;
}
