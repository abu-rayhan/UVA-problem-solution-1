#include<stdio.h>

int main(){
    long long t,e,f,c,n,r,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld %lld",&e,&f,&c);
        n=e+f;
        r=0;
        while(n!=1&&n>=c){
            n=n-c;
            r++;
            n++;
        }
        printf("%lld\n",r);
    }
    return 0;
}
