#include<stdio.h>
#include<string.h>

int main(){
    char s[21];
    int i,l,a[21],j;
    while(scanf("%s",s)!=EOF){
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')a[i]=1;
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')a[i]=2;
            else if(s[i]=='D'||s[i]=='T')a[i]=3;
            else if(s[i]=='L')a[i]=4;
            else if(s[i]=='M'||s[i]=='N')a[i]=5;
            else if(s[i]=='R')a[i]=6;
            else a[i]=0;

        }
        for(i=0;i<l;i++){
            for(j=i+1;j<l;j++){
                if(a[i]==a[j])a[j]=0;
                else break;
            }
            if(a[i]>0)printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
