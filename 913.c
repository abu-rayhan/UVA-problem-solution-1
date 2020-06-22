#include<stdio.h>

int main(){
    long long s,i,j,n,k;
    while(scanf("%lld",&n)!=EOF){
        if(n==1)printf("1\n");
        else if(n==3)printf("15\n");
        else{
            j=15;
            k=10;
            for(i=5;i<=n;i+=2){
                s=3*j;
                k=k+4;
                j=j+k;
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}
