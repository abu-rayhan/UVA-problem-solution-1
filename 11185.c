#include<stdio.h>

int main(){
    long long n,a[100],i,c,r,d;
    while(scanf("%lld",&n)!=EOF){
        if(n<0)break;
        c=0;
        d=0;
        while(d<=1){
            r=n%3;
            a[c]=r;
            c++;
            n=n/3;
            if(n==0)d++;
        }
        for(i=c-2;i>=0;i--)printf("%lld",a[i]);
        printf("\n");
    }
    return 0;
}
