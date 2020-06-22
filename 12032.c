#include<stdio.h>

int main(){
    long long t,n,a[100001],i,j,k,d,c,p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        k=0;
        a[0]=0;
        for(j=1;j<=n;j++){
            scanf("%lld",&a[j]);
            d=a[j]-a[j-1];
            if(d>k)k=d;
        }
        p=k;
        for(j=1;j<=n;j++){
            if(a[j]-a[j-1]==k){
                k--;
            }
            else if(a[j]-a[j-1]>k){p++;break;}
        }
        printf("Case %lld: %lld\n",i,p);
    }
    return 0;
}
