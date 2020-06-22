#include<stdio.h>
long long prime (long long x);
int main(){
    long long n,i,j,x,y,p;
    while(scanf("%lld",&n)&&n){
        long long x,y,p;
        p=n;
        if(prime(p)==1){printf("0\n");continue;}
        while(n--){
            if(prime(n)==1){x=n;break;}
        }
        while(p++){
            if(prime(p)==1){y=p;break;}
        }
        printf("%lld\n",y-x);
    }
    return 0;
}
long long prime (long long x){
    int i,z=1;
    if(x==2||x==3||x==5||x==7||x==11)return 1;
    if(x%2==0)return 0;
    for(i=3;i<=sqrt(x);i+=2){
        if(x%i==0){
            z=0;
            break;
        }
    }
    return z;
}
