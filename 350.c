#include<stdio.h>

int main()
{
    double z,l,i,m,n,a;
    double d,j,k,p,g;
    for(j=1;j>=1;j++){
        scanf("%lf %lf %lf %lf",&z,&i,&m,&l);
        if(z==0&&l==0&&i==0&&m==0){
            break;
        }
        a=l;
        n=a;
        for(k=1;k>=1;k++){
            l=a;
            a=(z*l)+i;
            g=a/m;
            d=a-(m*g);
            a=d;
            if(a==n){
                p=k;
                break;
            }
        }
        printf("Case %lf: %lf\n",j,p);
    }
    return 0;
}
