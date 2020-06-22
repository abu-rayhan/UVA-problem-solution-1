#include<stdio.h>
int main(){
    int h,m,a,b,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d:%d",&h,&m);
        a=11-h;
        b=60-m;
        if(a==-1&&b!=0)a=11;
        if(m==0){a=a+1;b=0;}
        if(a<0)a=a/(-1);
        if(a==0)a=12;
        if(a>9)printf("%d:",a);
        else printf("0%d:",a);
        if(b>9)printf("%d\n",b);
        else printf("0%d\n",b);
    }
    return 0;
}
