#include<stdio.h>

int main(){
    int t,h1,m1,h2,m2,h3,m3,h4,m4,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
        if(h1>h4)printf("Case %d: Hits Meeting\n",i);
        else if(h2<h3)printf("Case %d: Hits Meeting\n",i);
        else if(h1==h4){
            if(m1>m4)printf("Case %d: Hits Meeting\n",i);
        }
        else if(h2==h3){
            if(m3>m2)printf("Case %d: Hits Meeting\n",i);
        }
        else printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
