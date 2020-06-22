#include<stdio.h>

int main(){
    long long i,n,j,p,q,k=0;
    while(scanf("%lld",&n)&&n){
            int c=0;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                p=i;
                for(j=i+1;j<=n/2;j++){
                    c=1;
                    if(n%j==0){q=j;break;}
                    else q=0;
                }
            }
        }
        if(n+1>p+q&&c==1)printf("%lld\n",p+q);
        else printf("%lld\n",n+1);
    }
}
