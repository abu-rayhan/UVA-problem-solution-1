#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,k,l,c;
    char s[101],s1[100];
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        scanf("%s",s);
        l=strlen(s);
        n=l/n;
        k=0;
        c=0;
        for(i=0;i<l;i++){
            k++;
            s1[c]=s[i];
            c++;
            if(k==n){
                s1[c]='\0';
                for(j=c-1;j>=0;j--)printf("%c",s1[j]);
                k=0;
                c=0;
            }
        }
        printf("\n");
    }
    return 0;
}
