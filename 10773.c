#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    double d,v,u,w,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&d,&v,&u);
        w=sqrt(u*u-v*v);
        if(w<=0 || u<=v || v<=0 || u<=0 || d<0){
            printf("Case %d: can't determine\n",i);
            continue;
        }
        t=(d/w)-(d/u);
        printf("Case %d: %.3lf\n",i,t);
    }
    return 0;
}
