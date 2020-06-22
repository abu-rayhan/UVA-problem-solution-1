#include<stdio.h>

int main(){
    long long n,t,p,s,i,d;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&n);
        p=n;
        do{
            s=0;
            while(n!=0){
                d=n%10;
                s+=d*d;
                n=n/10;
            }
            n=s;
        }
        while(s>9);
        if(s==1)printf("Case #%lld: %lld is a Happy number.\n",i,p);
        else printf("Case #%lld: %lld is an Unhappy number.\n",i,p);
    }
    return 0;
}
