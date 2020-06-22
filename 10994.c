#include<stdio.h>

long long rayhan(long long n){
    long long s=0,i;
    if(n<=0)return 0;
    while(n!=0){
        s+=(n/10)*45;
        for(i=(n/10)*10+1;i<=n;i++){
            s+=i%10;
        }
        n=n/10;
    }
    return s;
}
int main(){
    long long p,q;
    while(1){
        scanf("%lld %lld",&p,&q);
        if(p<0&&q<0)break;
        printf("%lld\n",rayhan(q)-rayhan(p-1));
    }
    return 0;
}
