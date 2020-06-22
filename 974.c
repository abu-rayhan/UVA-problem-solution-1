#include<stdio.h>
#include<string.h>
long long abu(long long x);
int main(){
    long long t,a,b,i,j,c,z;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&a,&b);
        z=0;
        printf("case #%lld\n",i);
        for(j=a;j<=b;j++){
            if(abu(j)==1){printf("%lld\n",j);z=1;}
        }
        if(z==0)printf("no kaprekar numbers\n");
        printf("\n");
    }
    return 0;
}
long long abu(long long x){
    long long m=0,p,r,q,i,c=0,t,j;
    long long s[100],cr;
    p=x*x;
    while(p!=0){
        c++;
        t=p%10;
        s[m]=t;
        m++;
        p/=10;
    }
    p=c/2;
    r=0;
    q=0;
    for(i=m-1;i>=p;i--){
        r=r*10+s[i];
    }
    for(i=p-1;i>=0;i--)q=q*10+s[i];
    if(r>0&&q>0){if(r+q==x)return 1;}
    else return 0;
}
