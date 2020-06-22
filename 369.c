#include<stdio.h>

int main(){
    double n,r,s,p,i;
    while(scanf("%lf %lf",&n,&r)){
        if(n==0&&r==0)break;
        p=r;
        if(r>n-r)r=n-r;
        s=1;
        for(i=0;i<r;i++){
            s*=(n-i)/(1+i);
        }
        printf("%.lf things taken %.lf at a time is %.lf exactly.\n",n,p,s);
    }
    return 0;
}
