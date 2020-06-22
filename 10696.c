#include<stdio.h>

int main()
{
    long long n,i,a;
    for(i=1;i>=1;i++){
        scanf("%lld",&n);
        a=n;
        if(n==0)break;
        if(n>=101){
            printf("f91(%lld) = %lld\n",a,n-10);
            continue;
        }
        else{
            for(;;){
                n=n+11;
                while(n>=101){
                    n=n-10;
                    if(n<=100)break;
                    else{
                        break;
                    }
                }
                if(n>=101){
                    printf("f91(%lld) = %lld\n",a,n-10);
                    break;
                }
            }
        }
    }
    return 0;
}
