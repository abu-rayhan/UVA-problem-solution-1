#include<stdio.h>

int main(){
    long long n,i,s,j;
    for(i=1;i>=1;i++){
        scanf("%lld",&n);
        if(n==0){
            break;
        }
        for(i=1;i>=1;i++){
            s=0;
            while(n!=0){
                j=n;
                j=j%10;
                s=s+j;
                n=n/10;
            }
            if(s<10){
                printf("%lld\n",s);
                break;
            }
            n=s;
        }
    }
    return 0;
}
