#include<stdio.h>

int main(){
    int t,i,j,x,k,c;
    char s[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        c=0;
        for(j=0;j<5;j++){
            scanf("%s",&s);
            for(k=0;s[k]!='|';k++){
                if(s[k]=='>')c=1;
            }
            for(x=k;x<5;x++){
                if(s[x]=='<')c=1;
            }
        }
        if(c==1)printf("Case %d: Thik Ball\n",i);
        else printf("Case %d: No Ball\n",i);
    }
    return 0;
}
