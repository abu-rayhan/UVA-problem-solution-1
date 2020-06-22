#include<stdio.h>
#include<string.h>

int main(){
    int a[123],i,t,f,c,j,k,l;
    char s[2001];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s",s);
        for(j=0;j<123;j++){
            a[j]=0;
        }
        l=strlen(s);
        for(j=0;j<l;j++){
            a[s[j]]++;
        }
        printf("Case %d: ",i);
        f=0;
        for(j=48;j<123;j++){
            if(a[j]>1){
                if(a[j]==2||a[j]==3||a[j]==5){printf("%c",j);f++;}
                else{
                    c=0;
                    for(k=2;k<=a[j]/2;k++){
                        if(a[j]%k==0)c++;
                    }
                    if(c==0){printf("%c",j);f++;}
                }
            }
        }
        if(f==0)printf("empty\n");
        else printf("\n");
    }
    return 0;
}
