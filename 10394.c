#include<stdio.h>
#include<math.h>
long long a[20000000]={0},m,ar[2000000],s[2000000];
void prime(){
    long long i,j,k=2,c;
    a[0]=a[1]=1;
    for(i=2;i<=sqrt(20000000);i++){
        for(j=k*2;j<=20000000;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
    ar[0]=2;
    m=1;
    c=1;
    for(i=3;i<20000000;i++){
        if(a[i]==0){
            ar[m]=i;
            if(ar[m]-ar[m-1]==2){
                s[c]=m;
                c++;
            }
            m++;
        }
    }
}
int main(){
    prime();
    long long n;
    while(scanf("%lld",&n)!=EOF){
        printf("(%lld, %lld)\n",ar[s[n]-1],ar[s[n]]);
    }
    return 0;
}
