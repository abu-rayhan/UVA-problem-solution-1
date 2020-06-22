#include<stdio.h>

int main(void){
    long long t,n,c,r,p,i;
    scanf("%lld",&p);
    for(i=1;i<=p;i++){
        scanf("%lld",&n);
        c=0;
        t=n;
        while(1){
            r=0;
            while(n!=0){
                r=r*10+n%10;
                n=n/10;
            }
            if((t-r)==0){
                printf("%lld %lld\n",c,r);
                break;
            }
            t=t+r;
            n=t;
            c=c+1;
        }
    }
    return 0;
}


