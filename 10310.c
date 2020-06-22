#include<stdio.h>

int main(){
    double n,x,y,x1,y1,x2,y2,g,d,td,tg,c,i,a,b;
    while(scanf("%lf %lf %lf %lf %lf",&n,&x,&y,&x1,&y1)!=EOF){
        c=0;
        for(i=1;i<=n;i++){
            scanf("%lf %lf",&x2,&y2);
            if(c==0){
                g=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
                d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
                tg=g;
                td=d/2;
                if(tg<=td){
                    c=1;
                    a=x2;
                    b=y2;
                }
            }
        }
        if(c==0)printf("The gopher cannot escape.\n");
        else printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",a,b);
    }
    return 0;
}
