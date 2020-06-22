#include<stdio.h>
#include<math.h>
long long a[10001];
long long prime(long long x){
    long long i;
    if(x%2==0)return 0;
    for(i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return 0;
    }
    return 1;
}
void abu(){
    long long c,i,n;
    c=0;
    for(i=0;i<=10000;i++){
        n=i*i+i+41;
        if(prime(n)==1)c++;
        a[i]=c;
    }
}
int main(){
    abu();
    long long i,n,t,c,a1,b;
    double r;
    while(scanf("%lld %lld",&a1,&b)!=EOF){
        c=a[b]-a[a1];
        if(prime(a1*a1+a1+41)==1)c++;
        t=b-a1+1;
        r=(c/(t*1.0))*100.0;
        printf("%.2lf\n",r+1e-8);
    }
    return 0;
}
