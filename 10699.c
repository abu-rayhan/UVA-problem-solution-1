#include<stdio.h>
#include<math.h>
long long a[1000001]={0};
void prime(){
    int i,j;
    for(i=2;i<=sqrt(1000000);i++){
        for(j=2;i*j<=1000000;j++){
            a[i*j]=1;
        }
    }
}

int main(){
    prime();
    long long n,i,c;
    while(scanf("%lld",&n)&&n){
            c=0;
        for(i=3;i<=n/2;i+=2){
            if(a[i]==0&&n%i==0)c++;
        }
        if(n%2==0)c++;
        if(a[n]==0)c++;
        printf("%lld : %lld\n",n,c);
    }
    return 0;
}
