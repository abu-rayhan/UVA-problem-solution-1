#include<stdio.h>

int main(){
    long long int a,b,t,s,s1,t1,c;
    while(scanf("%lld %lld",&a,&b)){
        if(a==0&&b==0)break;
        c=0;
        s1=0;
        while(a||b){
            t=a%10;
            t1=b%10;
            s=s1+t+t1;
            s1=s/10;
            c+=s1;
            a=a/10;
            b=b/10;
        }
        if(c==1)printf("1 carry operation.\n");
        else if(c==0)  printf("No carry operation.\n");
        else printf("%lld carry operations.\n",c);
    }
    return 0;
}
