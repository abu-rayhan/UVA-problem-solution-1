#include<stdio.h>

int main(){
    long long n,a[100000],i,s;
    while(1){
        scanf("%lld",&n);
        if(n==-1)break;
        if(n==0){printf("0 1\n");continue;}
        if(n==1){printf("1 2\n");continue;}
        a[0]=0;
        a[1]=1;
        a[2]=1;
        for(i=3;i<=n+1;i++){
            a[i]=a[i-1]+a[i-2];
        }
        s=0;
        for(i=1;i<=n;i++){
            s+=a[i];
        }
        printf("%lld %lld\n",s,s+a[n+1]);
    }
    return 0;
}
