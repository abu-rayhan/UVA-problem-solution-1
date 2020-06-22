#include<stdio.h>

int main(){
    long long n,i,z,s;
    while(scanf("%lld",&n)){
        if(n<0)break;
        z=1;
        s=1;
        for(i=1;i<=n;i++){
            s+=z;
            z++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
