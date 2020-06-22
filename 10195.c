#include<stdio.h>

int main(){
    double a,b,c,s,A;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        if(s<=0)printf("The radius of the round table is: 0.000\n");
        else
        printf("The radius of the round table is: %.3lf\n",A/s);
    }
    return 0;
}
