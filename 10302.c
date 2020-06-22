#include<stdio.h>
#include<math.h>

int main(){
    long long a,i,s,p,j;
    while(scanf("%lld",&a)!=EOF){
        s=0;
        for(i=1;i<=a;i++){
            p=1;
            for(j=1;j<=3;j++)p=p*i;
            s+=p;
        }
        printf("%lld\n",s);
    }
    return 0;
}
