#include<stdio.h>

int main(){
    long long n;
    while(scanf("%lld",&n)&&n>0){
        if(n==1)printf("0%%\n");
        else printf("%lld%%\n",25*n);
    }
    return 0;
}
