#include<stdio.h>

int main(){
    int i,b,j;
    long long a[81];
    for(j=1;j>=1;j++){
    scanf("%d",&b);
        if(b==0)break;
        a[0]=1;
        a[1]=1;
        for(i=2;i<=b;i++){
            a[i]=a[i-1]+a[i-2];
        }
        printf("%lld\n",a[b]);
    }
    return 0;
}

