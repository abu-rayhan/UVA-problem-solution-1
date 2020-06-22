#include<stdio.h>
long long d,s;

int main(){
    long long t,a,b,k,i,m,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&k);
        m=n=0;
        for(i=a;i<=b;i++){
            if(i%k==0){
                rayhan(i);
                m+=s;
                n+=d;
            }
        }
        printf("%lld %lld\n",n,m);
    }
    return 0;
}
void rayhan(long long x){
    long long i;
    if(x==1){d=1;s=1;return;}
    if(x==4||x==9){
        if(x==4){d=3;s=7;}
        else {d=3;s=13;}
        return;
    }
    d=2;
    s=0;
    if(x%2==0){
        for(i=2;i<=sqrt(x);i++){
            if(x%i==0){
                s+=i;
                if(i*i!=x){
                    s+=x/i;
                }
                else{d++;continue;}
                d+=2;
            }
        }
    }
    else{
        for(i=3;i<=sqrt(x);i+=2){
            if(x%i==0){
                s+=i;
                if(i*i!=x)
                s+=x/i;
                else{d++;continue;}
                d+=2;
            }
        }
    }
    s+=1+x;
}
