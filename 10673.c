#include<stdio.h>

int main(){
    long long t,x,k,p,q,a,b;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &x, &k);
        a=floor(x*1.0/k);
        b=ceil(x*1.0/k);
        for(p=0;p*a<=x;p++){
            if((x-a*p)%b==0){
                q=(x-a*p)/b;
                break;
            }
        }
        printf("%lld %lld\n",p,q);
    }
    return 0;
}
