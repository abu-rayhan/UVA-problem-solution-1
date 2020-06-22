#include<stdio.h>

int main(){
    long long t,a,r;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&a);
        r=(a*(a+1)/2)%3;
        if(r==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
