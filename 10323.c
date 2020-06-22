#include<stdio.h>

int main(){
    long long n,r,i,p;
    while(scanf("%lld",&n)!=EOF){
        p=1;
        if(n<=0){
            if(n%2==0)printf("Underflow!\n");
            else printf("Overflow!\n");
            continue;
        }
        if(n<8){printf("Underflow!\n");continue;}
        if(n>13){printf("Overflow!\n");continue;}
        for(i=1;i<=n;i++)p=p*i;
        printf("%lld\n",p);
    }
    return 0;
}
