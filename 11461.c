#include<stdio.h>
#include<math.h>

int main(){
    long long a,b,i,j,c;
    double d,f;
    for(i=1;i>=1;i++){
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)break;
        if(a==0)a=1;
        c=0;
        for(j=a;j<=b;j++){
            d=sqrt(j);
            f=floor(d);
            if(d==f)c++;
        }
        printf("%lld\n",c);
    }
    return 0;
}
