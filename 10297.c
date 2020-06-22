#include<cstdio>
#include<math.h>
int main(){
    double d,v,p=acos(-1),c,t,r;
    while(scanf("%lf %lf",&d,&v)&&d&&v){
        t=p*(d/2)*(d/2)*d;
        c=p*(d/2)*(d/2)*(d/2)*(2.0/3);
        r=t-c-v;
        r=(4*t)/p;
        r=pow(r,1/3);
        printf("%.3lf\n",r);
    }
    return 0;
}
