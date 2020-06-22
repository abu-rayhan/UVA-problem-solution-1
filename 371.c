#include<stdio.h>

int main(){
    long long int a,b,max,m,i,k,c,r,v;
    while(1){
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)break;
        if(a>b){m=b;b=a;a=m;}
        max=0;
        for(i=a;i<=b;i++){
            r=i;
            c=0;
            while(1){
                if(r%2==0){r=r/2;c++;}
                else {r=3*r+1;c++;}
                if(r==1)break;
            }
            if(max<c){
                max=c;
                v=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,v,max);
    }
    return 0;
}
