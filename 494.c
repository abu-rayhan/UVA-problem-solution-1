#include<stdio.h>

int main(){
    long long i,c;
    char s[100000];
    while(gets(s)){
        c=0;
        for(i=0;s[i]!='\0';i++){
            if(
               ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
               &&
               ((s[i+1]<'a'||s[i+1]>'z')&&(s[i+1]<'A'||s[i+1]>'Z'))
            )c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
