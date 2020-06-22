#include<stdio.h>

int main()
{
    long long n,a,b,i;
    double x,y;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&a,&b);
        x=(a+b)/2.0;
        y=(a-x);
        a=(int)x;
        b=(int)y;
        if(a==x && b==y){
            if(a>=0 && b>=0){
                if(a>=b){
                    printf("%lld %lld\n",a,b);
                }
                else{
                    printf("%lld %lld\n",b,a);
                }
            }
            else{
                printf("impossible\n");
            }
        }
        else{
            printf("impossible\n");
        }
    }
    return 0;
}
