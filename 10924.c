#include<stdio.h>

int rayhan(int x){
    int i,c;
    if(x==1||x==2||x==3||x==5)return 1;
    else{
        c=0;
        for(i=2;i<=x/2;i++){
            if(x%i==0)c++;
        }
        if(c==0)return 1;
        else return 0;
    }
}
int main(){
    int i,l,r;
    char s[100];
    while(scanf("%s",s)!=EOF){
        l=strlen(s);
        r=0;
        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z')r+=s[i]-96;
            else if(s[i]>='A'&&s[i]<='Z')r+=s[i]-38;
        }
        if(rayhan(r)==1)printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
