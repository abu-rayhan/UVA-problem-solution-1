#include<stdio.h>

int main(){
    long long n,q,a[50009],i,j,z,t;
    scanf("%lld",&n);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&q);
        z=0;
        for(j=n-1;j>=0;j--){
            if(q>a[j]){printf("%lld ",a[j]);z=1;break;}
        }
        if(z==0)printf("X ");
        z=0;
        for(j=0;j<n;j++){
            if(a[j]>q){printf("%lld\n",a[j]);z=1;break;}
        }
        if(z==0)printf("X\n");
    }
    return 0;
}
