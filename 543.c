#include<stdio.h>
#include<math.h>
long long rayhan(long long x);
int main(){
    long long n,i,j,p,q;
    while(scanf("%lld",&n)&&n){
            int d=0;
        for(i=2;i<=n/2;i++){
            if(rayhan(i)==0){
                if(rayhan(n-i)==0){
                    p=i;
                    q=n-i;
                    d=1;
                    break;
                }
            }
        }
        if(d==1)printf("%lld = %lld + %lld\n",n,p,q);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
long long rayhan(long long x){
    long long c=0,i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            c=1;
            break;
        }
    }
    return c;
}
