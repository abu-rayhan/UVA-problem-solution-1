#include<cstdio>
#include<math.h>
using namespace std;
int main(){
    double d,v,p=acos(-1),c,t,r;
    while(scanf("%lf %lf",&d,&v)&&d&&v){
        t=p*(d/2)*(d/2)*d;
        c=p*(d/2)*(d/2)*(d/2)*(2.0/3);
        r=t-c-v;
        r=(6*r)/p;
        r=cbrt(r);
        printf("%.3lf\n",r);
    }
    return 0;
}

