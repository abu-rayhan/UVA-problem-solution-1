#include<stdio.h>
#include<string.h>
long long abu(long long x);
int main(){
    long long t,a,b,i,j,c,z,y=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        if(y>0)printf("\n");
        scanf("%lld %lld",&a,&b);
        z=0;
        printf("case #%lld\n",i);
        for(j=a;j<=b;j++){
            if(abu(j)==1){printf("%lld\n",j);z=1;}
        }
        if(z==0)printf("no kaprekar numbers\n");
        y++;
    }
    return 0;
}
long long abu(long long x){
    long long a,b,n=x*x,k=10;
    while(n/k){
        a=n%k;
        b=n/k;
        k*=10;
        if(a==0||b==0)continue;
        if(a+b==x)return 1;
    }
    return 0;
}
