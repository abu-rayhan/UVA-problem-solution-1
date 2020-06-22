#include<stdio.h>
#include<math.h>
long long a[100000001]={0};
void rayhan(){
    long long j,m=1,i,k;
    a[0]=a[1]=1;k=2;
    for(i=2;i<=sqrt(100000000);i++){
        for(j=2*k;j<=100000000;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
}
int main(){
    rayhan();
    long long x,y,d,m,n,min,p,g,i,k;
    for(k=1;k<=100000;k++){
        scanf("%lld",&n);
        min=n;
        m=p=0;
        if(n%2==1){
            if(a[n-2]==0&&n!=1){
                if(n-2>2)printf("%lld is the sum of 2 and %lld.\n",n,n-2);
                else printf("%lld is the sum of %lld and 2.\n",n,n-2);
            }
            else printf("%lld is not the sum of two primes!\n",n);
            continue;
        }
        for(i=n/2;i<=n;i++){
            if(a[n/2-m]==0&&a[i]==0&&(n/2-m)!=i){
                printf("%lld is the sum of %lld and %lld.\n",n,n/2-m,i);
                p=1;
                break;
            }
            m++;
        }
        if(p==0)printf("%lld is not the sum of two primes!\n",n);
    }
    return 0;
}
