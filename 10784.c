#include<stdio.h>
#include<math.h>

int main(){
    long long i,j;
    double n;
    for(i=1;i>=1;i++){
        scanf("%lf",&n);
        if(n==0)break;
        n=(sqrt(9+(8*n))+3)/2;
        printf("Case %lld: %.lf\n",i,ceil(n));
    }
    return 0;
}
