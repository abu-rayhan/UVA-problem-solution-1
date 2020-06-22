#include<stdio.h>

int main()
{
    long long a[100],i,j,k,n,d,m,g;
    long long b,p,s;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&b);
        p=b;
        j=0;
        while(b!=0){
            d=b/10;
            b=b%10;
            a[j]=b;
            b=d;
            j++;
        }
        g=0;
        for(k=0;k<j;k++){
            s=1;
            for(m=0;m<j;m++){
                s=s*a[k];
            }
            g+=s;
        }
        if(g==p){
            printf("Armstrong\n");
        }
        else printf("Not Armstrong\n");
    }
    return 0;
}
