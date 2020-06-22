#include<stdio.h>

int main(){
    long long n,s[90],i;
    while(1){
        scanf("%lld",&n);
        if(n==0)break;
        s[0]=1;
        s[1]=1;
        for(i=2;i<=n;i++){
           s[i]=s[i-1]+s[i-2];
        }
        printf("%lld\n",s[n-1]);
    }
    return 0;
}
