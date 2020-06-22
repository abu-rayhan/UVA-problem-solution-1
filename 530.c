#include<stdio.h>

int main(){
    long long n,k,i,j,u,d,w;
    for(i=1;i>=1;i++){
        scanf("%lld %lld",&n,&k);
        if(n==0&&k==0)break;
        if(k>n/2)k=n-k;
        u=1;
        for(i=0;i<k;i++)u=u*(n-i)/(1+i);
        printf("%lld\n",u);
    }
    return 0;
}
