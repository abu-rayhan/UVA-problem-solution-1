#include<stdio.h>
#include<math.h>
int main(){
    long long t,n,c,i;
    double l;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        l=0;
        for(i=1;i<=n;i++){
            l+=log10(i);
        }
        c=floor(l)+1;
        printf("%lld\n",c);
    }
    return 0;
}
