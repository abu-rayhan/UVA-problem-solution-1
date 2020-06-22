#include<stdio.h>

int main(){
    long long b,n,p,q,a[30],i,s,j;
    scanf("%lld",&b);
    for(i=1;i<=b;i++){
        scanf("%lld %lld %lld",&n,&p,&q);
        for(j=0;j<n;j++){
            scanf("%lld",&a[j]);
        }
        s=0;
        for(j=0;j<p;j++){
            s+=a[j];
            if(s>q||j+1>n){
                break;
            }
        }
        printf("Case %lld: %lld\n",i,j);
    }
    return 0;
}
