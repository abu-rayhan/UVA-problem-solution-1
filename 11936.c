#include<stdio.h>

int main(){
    long long t,a,b,c;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b<=c||b+c<=a||a+c<=b)printf("Wrong!!\n");
        else printf("OK\n");
    }
    return 0;
}
