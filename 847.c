#include<stdio.h>

int main(){
    long long n,i,c,p,d;
    while(scanf("%lld",&n)!=EOF){
        d=1;
        for(i=1;i>=1;i++){
            c=2;
            while(c<=9){
                p=d*c;
                c++;
            }
            if(p>=n){
                if(i%2==0)printf("Ollie wins.\n");
                else printf("Stan wins.\n");
                break;
            }
            d=p;
        }
    }
    return 0;
}
