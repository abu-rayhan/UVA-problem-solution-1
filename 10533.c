#include<stdio.h>
#include<math.h>

int prime(long long x){
    int z=1,i;
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
int main(){
    long long o,a,b,s,c,t,i,j,d,w;
    scanf("%lld",&o);
    for(i=1;i<=o;i++){
        scanf("%lld %lld",&a,&b);
        if(a>b){
            d=b;
            b=a;
            a=d;
        }
        c=0;
        for(j=a;j<=b;j++){
            w=j;
            if(prime(w)==1){
                s=0;
                while(w!=0){
                    t=w%10;
                    s=s+t;
                    w=w/10;
                }
                if(prime(s)==1)c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
