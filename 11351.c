#include<stdio.h>

int main(){
    long long t,n,m,i,j,w;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&n,&m);
        w=0;
        for(j=2;j<=n;j++){
            w=(w+m)%j;
        }
        printf("Case %lld: %lld\n",i,w+1);
    }
    return 0;
}
