#include<stdio.h>

int main(){
    int s,i,j,t,c;
    scanf("%d",&s);
    for(i=1;i<=s;i++){
            c=0;
        for(j=1;j<=13;j++){
            scanf("%d",&t);
            if(t<=0)c=1;
        }
        if(c==0)printf("Set #%d: Yes\n",i);
        else printf("Set #%d: No\n",i);
    }
    return 0;
}
