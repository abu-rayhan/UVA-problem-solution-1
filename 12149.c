#include<stdio.h>

int main(){
    long long n,i,j,s;
    for(i=1;i>=1;i++){
        scanf("%lld",&n);
        if(n==0)break;
        s=0;
        for(j=1;j<=n;j++){
            s+=(j*j);
        }
        printf("%lld\n",s);
    }
    return 0;
}
