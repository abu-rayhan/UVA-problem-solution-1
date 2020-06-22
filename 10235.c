#include<stdio.h>
#include<math.h>

long long prime(long long m){
    long long x,i,c=0,t;
    x=sqrt(m);
    for(i=2;i<=x;i++){
        if(m%i==0)c++;
    }
    if(c==0)t=1;
    else t=0;
    return t;
}

int main(){
    long long n,r,p,l,q;
    while(scanf("%lld",&n)!=EOF){
        l=prime(n);
        if(l==0)printf("%lld is not prime.\n",n);
        else if(l==1&&n<10)printf("%lld is prime.\n",n);
        else{
            p=n;
            r=0;
            while(p!=0){
                r=r*10;
                r=r+p%10;
                p=p/10;
            }
            q=prime(r);
            if(q==1&&n>9&&(n!=r))printf("%lld is emirp.\n",n);
            else printf("%lld is prime.\n",n);
        }
    }
    return 0;
}
