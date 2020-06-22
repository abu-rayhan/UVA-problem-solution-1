#include<stdio.h>

int main(){
    char c,d;
    double a,b,t,f;
    scanf("%lf",&t);
    while(t--){
       scanf("%lf %c %lf %c",&a,&c,&b,&d);
       f=a*0.5+b*0.05;
       printf("%lf\n",f);
    }
}
