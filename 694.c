#include<stdio.h>

int main(){
    long long a,l,p,c,i;
    for(i=1;i>=1;i++){
        scanf("%lld %lld",&a,&l);
        if(a<0&&l<0)break;
        p=a;
        c=1;
        while(a>1&&a<=l){
            if(a%2==0){
                a=a/2;
                if(a>=1&&a<=l)c++;
            }
            else {
                a=3*a+1;
                if(a>=1&&a<=l)c++;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,p,l,c);
    }
    return 0;
}

