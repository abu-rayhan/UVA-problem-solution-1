#include<stdio.h>
#include<math.h>
long long a[10000001];
long long ar[10000001]={0};
void prime(){
    long long i,j,k=2,c=1;
    for(i=2;i<=sqrt(10000000);i++){
        for(j=2*k;j<=10000000;j+=k)ar[j]=1;
        k++;
        while(ar[k]==1)k++;
    }
    a[0]=2;
    for(i=3;i<=10000000;i+=2){
        if(ar[i]==0){a[c]=i;c++;}
    }
}
int abu(long long x){
    long long i;
    for(i=0;a[i]<=sqrt(x);i++){
        if(x%a[i]==0)return 0;
    }
    return 1;
}
int main(){
    prime();
    long long n,a1,x;
    while(scanf("%lld",&n)&&n){
        if(ar[n]==0){
            a1=pow(2,n)-1;
            if(abu(a1)==1){
                x=a1*pow(2,n-1);
                printf("Perfect: %lld!\n",x);
            }
            else printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
