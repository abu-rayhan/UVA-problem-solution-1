#include<stdio.h>

int main(){
    long long n,p,c,d,a[1000],t,i;
    while(1){
        scanf("%lld",&n);
        if(n==0)break;
        c=0;
        p=0;
        t=0;
        while(n!=0){
            d=n%2;
            if(d==1)c++;
            a[t]=d;
            t++;
            n=n/2;
        }
        printf("The parity of ");
        for(i=t-1;i>=0;i--)printf("%lld",a[i]);
        printf(" is %lld (mod 2).\n",c);
    }
    return 0;
}
