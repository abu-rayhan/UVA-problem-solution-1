#include<stdio.h>

int main(){
    int x,y,x1,y1,c1,c2,r,t,x2,y2;
    int l,w,a,b,d,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d %d",&x,&y,&x1,&y1,&c1,&c2,&r);
        l=x1-x;
        w=y1-y;
        if((3*l==5*w)&&(l==5*r)&&20*(c1-x)==l*9&&2*(c2-y)==w)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
