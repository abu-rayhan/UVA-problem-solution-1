#include<stdio.h>

int main(){
    char s[1001];
    int i,r,l;
    while(1){
        gets(s);
        l=strlen(s);
        if(l==1&&s[0]=='0')break;
        l=strlen(s);
        r=0;
        for(i=0;i<l;i++){
            if(s[i]>='0'&&s[i]<='9')
            r=(r*10+s[i]-'0')%11;
        }
        if(r==0)printf("%s is a multiple of 11.\n",s);
        else printf("%s is not a multiple of 11.\n",s);
    }
    return 0;
}
