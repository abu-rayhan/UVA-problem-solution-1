#include<stdio.h>

int main(){
    long long i,a[18],n,k,p,b,j;
    k=0;
    while(scanf("%lld",&n)!=EOF){
        p=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++){
            b=1;
            for(j=i;j<n;j++){
                b=b*a[j];
                if(b>p){
                    p=b;
                }
            }
        }
        k++;
        printf("Case #%lld: The maximum product is %lld.\n\n",k,p);
    }
    return 0;
}
