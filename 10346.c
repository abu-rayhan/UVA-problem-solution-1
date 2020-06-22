#include<stdio.h>

int main()
{
    long long a,b,p,s=0,j;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        s=a;
        while(a>=b){
            j=a;
            j=j/b;
            s=s+j;
            a=j+(a-b*j);
        }
        printf("%lld\n",s);
    }
    return 0;
}
