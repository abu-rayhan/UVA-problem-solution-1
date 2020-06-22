#include<stdio.h>
#include<string.h>

int main(){
    char s[10000],w[10000];
    int i,j,k,l;
    while(scanf(" %[^\n]",&s)!=EOF){
        l=strlen(s);
        k=0;
        for(i=0;i<l;i++){
            if(s[i]!=' '){
                w[k]=s[i];
                k++;
            }
            else{
                w[k]='\0';
                for(j=k-1;j>=0;j--)printf("%c",w[j]);
                printf(" ");
                k=0;
            }
        }
        if(k>0){
            w[k]='\0';
            for(j=k-1;j>=0;j--)printf("%c",w[j]);
        }
        printf("\n");
    }
    return 0;
}
