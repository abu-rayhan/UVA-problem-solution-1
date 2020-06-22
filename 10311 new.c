#include<stdio.h>
#include<math.h>
long long a[100000009]={0},ar[30000009];
long long abu(long long x){
    long long i;
    if(x==1||x==2||x==3||x==5||x==7)return 1;
    if(x%2==0)return 0;
    for(i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return 0;
    }
    return 1;
}
void rayhan(){
    long long m=0,i;
    for(i=1;i<=100000000;i++){
        if(abu(i)==1){
            ar[m]=i;
            m++;
            a[i]=1;
            printf("%lld ",i);
        }
    }
    printf("\n");
}
int main(){
    rayhan();
    long long x,y,d,m,n,min,p,g,k,i;
    while(scanf("%lld",&n)!=EOF){
        min=n;
        m=p=0;
        for(i=0;ar[i]<=n/2;i++){
            g=ar[i];
            if(a[n-g]==1){
                x=g;y=n-g;
                d=abs(x-y);
                if(min>d){m=x;p=y;min=d;}
            }
        }
        if(m==0||p==0){
            printf("%lld is not the sum of two primes!\n",n);continue;
        }
        printf("%lld is the sum of",n);
        (m>p)?printf(" %lld and %lld.\n",p,m):printf(" %lld and %lld.\n",m,p);
    }
    return 0;
}

