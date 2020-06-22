#include<stdio.h>
#include<math.h>
long long a[1000001]={0};
void abu(){
    long long i,j,k=2;
    a[0]=a[1]=1;
    for(i=2;i<=sqrt(1000000);i++){
        for(j=k*2;j<=1000000;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
}
int main(){
    abu();
    long long n,i,f;
    while(scanf("%lld",&n)&&n){
        f=0;
        for(i=2;i<=n/2;i++){
            if(a[i]==0&&a[n-i]==0){
                printf("%lld:\n%lld+%lld\n",n,i,n-i);
                f=1;
                break;
            }
        }
        if(f==0)printf("%lld:\nNO WAY!\n",n);
    }
    return 0;
}
