#include<stdio.h>

int main()
{
    long long a,n,i,d,j,c;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a);
        c=((a*567)/9)+7492;
        c=((c*235)/47)-498;
        d=0;
        while(c!=0){
            d++;
            j=c;
            j=j%10;
            if(d==2){
                if(j>=0){
                    printf("%lld\n",j);
                }
                else{
                    printf("%lld\n",-j);
                }
                break;
            }
            c=c/10;
        }

    }
    return 0;
}
