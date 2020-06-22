#include<stdio.h>

int main()
{
    double a,b,c,e,s;
    int i,n,d,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d);
        s=0;
        for(j=1;j<=d;j++){
            scanf("%lf %lf %lf",&a,&b,&c);
            if(b>0)
            e=(a/b)*c*b;
            else e=0;
            s+=e;
        }
        printf("%.lf\n",s);
    }
    return 0;
}
