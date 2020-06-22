#include<stdio.h>
#include<string.h>

int main(){
    int t,i,j,d,l;
    char s[101];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
        gets(s);
        l=strlen(s);
        d=0;
        for(j=0;j<l;j++){
            if(s[j]==' '||s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'){
                d+=1;
            }
            else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x'){
                d+=2;
            }
            else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y'){
                d+=3;
            }
            else if(s[j]=='z'||s[j]=='s')d+=4;
        }
        printf("Case #%d: %d\n",i,d);
    }
    return 0;
}
