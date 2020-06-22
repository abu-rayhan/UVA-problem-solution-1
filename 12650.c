#include<stdio.h>

int main(){
    long long n,r,a[10000],c,i,j;
    while(scanf("%lld %lld",&n,&r)!=EOF){
        for(i=0;i<r;i++)scanf("%lld",&a[i]);
        if(n==r){
            printf("*\n");
            continue;
        }
        for(i=0;i<n;i++){
            c=0;
            for(j=0;j<r;j++){
                if(a[j]==i+1)c++;
            }
            if(c==0)printf("%lld ",i+1);
        }
        printf("\n");
    }
    return 0;
}
