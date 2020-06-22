#include<stdio.h>

int main(){
    int i,j,m,n;
    char s[1000],a[1000];
    while(1){
        scanf("%d %s",&n,s);
        if(n==0&&strcmp(s,"0")==0)break;
        m=0;
        for(i=0;s[i]!='\0';i++){
            if(s[i]-'0'!=n){a[m]=s[i];m++;}
        }
        i=0;
        while(a[i]=='0')i++;
        if(i<m){
            for(j=i;j<m;j++)printf("%c",a[j]);
        }
        else printf("0");
        printf("\n");
    }
    return 0;
}
