#include<stdio.h>
#include<math.h>
long long prime(long long x);
long long factor(long long p);
int main(){
    long long a[100000],i,j,n,p,m,x,s,z,c,k,d;
    while(scanf("%lld",&n)&&n){
        if(n<0)p=-n;
        else p=n;
        x=factor(p);
        if(n<0)printf("%lld = -1 x",n);
        else printf("%lld =",n);
        while(p!=1){
            if(prime(x)==1){
                printf(" %lld",x);
            }
            else {
                x=factor(p);
                printf(" %lld",x);
            }
            p=p/x;
            x=p;
            if(p>1)printf(" x");
        }
        printf("\n");
    }
    return 0;
}
long long factor(long long p){
    long long i,x,y;
    if(p%2==0){
           return 2;
    }
    else{
        for(i=3;i<=sqrt(p);i+=2){
            if(p%i==0){
                if(prime(i)==1){
                    x=i;
                }
                if(i*i!=p){
                    if(prime(p/i)==1){
                        y=p/i;
                    }
                    else return x;
                    if(x>y)return y;
                    else return x;
                }
                else return x;
            }
        }
        if(prime(p)==1)return p;
    }
}
long long prime(long long x){
    int z=1,i;
    if(x==3||x==2||x==5||x==7||x==11)return 1;
    if(x%2==0)return 0;
    else{
        for(i=3;i<=sqrt(x);i+=2){
            if(x%i==0){
                z=0;
                break;
            }
        }
    }
    return z;
}
