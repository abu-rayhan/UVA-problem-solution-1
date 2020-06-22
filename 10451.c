#include<stdio.h>
#include<math.h>

int main(){
    double n,a,p=2*acos(0),a1,r,v,a2,h,i=1;
    while(scanf("%lf %lf",&n,&a)){
        if(n<3)break;
        r=(2*(a/n))/sin((2*p)/n);
        a1=(p*r)-a;
        v=sqrt(2*r*(1-cos((2*p)/n)));
        h=(2*(a/n))/v;
        a2=a-(p*h*h);
        printf("Case %.lf: %.5lf %.5lf\n",i,a1,a2);
        i++;
    }
    return 0;
}
