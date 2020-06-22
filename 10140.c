#include<stdio.h>
#include<math.h>
long long a[1000001],ar[10000005]={0},c1,p1[10000000];
long long prime(long long l,long long p[]){
    long long i;
    if(l==0||l==1)return 0;
    if(l==3||l==5||l==7)return 1;
    for(i=0;p[i]<=sqrt(l);i++){
        if(l%p[i]==0)return 0;
    }
    return 1;
}
int main(){
    long long i,j,k=2;
    for(i=2;i<=sqrt(10000000);i++){
        for(j=2*k;j<=10000000;j+=k)ar[j]=1;
        k++;
        while(ar[k]==1)k++;
    }
    p1[0]=2;
    c1=1;
    for(i=3;i<=10000000;i+=2){
        if(ar[i]==0){p1[c1]=i;c1++;}
    }
    long long l,u,p,q,m,n,x,y,g,max,c,d;
    while(scanf("%lld %lld",&l,&u)!=EOF){
        max=c=0;
        g=u;
        if(l<=2){a[c]=2;c=1;}
        if(l%2==0)l++;
        for(i=l;i<=u;i+=2){
            if(prime(i,p1)==1){
                a[c]=i;
                c++;
            }
        }
        if(c<2){printf("There are no adjacent primes.\n");continue;}
        for(i=1;i<c;i++){
            d=a[i]-a[i-1];
            if(g>d){g=d;x=a[i-1];y=a[i];}
            if(max<d){max=d;p=a[i-1];q=a[i];}
        }
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",x,y,p,q);
    }
    return 0;
}
