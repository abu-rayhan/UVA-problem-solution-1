#include<stdio.h>
#include<string.h>

int main(){
    int i,d,l,t,d1;
    char s[1005];
    while(scanf("%s",s)){
        l=strlen(s);
        if(s[0]=='0'&&l==1)break;
        d=0;
        for(i=0;s[i]!='\0';i++){
            d+=s[i]-'0';
        }
        for(i=0;s[i]!='\0';i++)printf("%c",s[i]);
        if(d%9==0){
            d1=1;
            while(d/10>0){
                t=0;
                while(d!=0){
                    t+=(d%10);
                    d/=10;
                }
                if(t%9==0){d1++;d=t;}
                else break;
            }
            printf(" is a multiple of 9 and has 9-degree %d.\n",d1);
        }
        else printf(" is not a multiple of 9.\n");
    }
    return 0;
}
