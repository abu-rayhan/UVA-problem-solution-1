#include<stdio.h>

int main(){
    int r,t,i,l,w;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&r);
        l=5*r;
        w=3*r;
        printf("Case %d:\n",i);
        printf("%d %d\n",-(45*l)/100,w/2);
        printf("%d %d\n",(55*l)/100,w/2);
        printf("%d %d\n",(55*l)/100,-w/2);
        printf("%d %d\n",-(45*l)/100,-w/2);
    }
    return 0;
}
