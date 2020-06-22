#include<stdio.h>

int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a==b)printf("%lld\n",a);
        else if(a>b)printf("%lld\n",a);
        else printf("%lld\n",b);
    }
    return 0;
}
