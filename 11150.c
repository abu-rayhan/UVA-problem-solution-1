#include<stdio.h>

int main(){
    int n,a,i,s;
    while(scanf("%d",&n)!=EOF){
        s=n;
        while(n>=2){
            a=n/3;
            s=s+a;
            n=n-a*3;
            n=n+a;
            if(n==2)n=3;
        }
        printf("%d\n",s);
    }
    return 0;
}
