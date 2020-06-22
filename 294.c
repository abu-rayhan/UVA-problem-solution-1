#include<stdio.h>
#include<math.h>

int main(){
    long long n,a,b,i,j,k,m,c;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld %lld",&a,&b);
        k=0;
        for(i=a;i<=b;i++){
            if(i==1)c=1;
            else c=2;
            if(i==4||i==9)c=3;
            else{
            if(i%2==0){
                for(j=2;j<=sqrt(i);j++){
                    if(i%j==0)c+=2;
                }
            }
            else{
                for(j=3;j<=sqrt(i);j+=2){
                    if(i%j==0)c+=2;
                }
            }
            }
            if(k<c){k=c;m=i;}
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,m,k);
    }
    return 0;
}
