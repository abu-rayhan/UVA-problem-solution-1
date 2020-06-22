#include<stdio.h>

int main()
{
    long long n,a,b[100],i,max,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        for(j=0;j<a;j++){
            scanf("%lld",&b[j]);
        }
        max=b[0];
        for(j=1;j<a;j++){
            if(max<=b[j]){
                max=b[j];
            }
        }
        printf("Case %lld: %lld\n",i,max);
    }
    return 0;
}
