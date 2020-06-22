#include<stdio.h>
#include<math.h>

int main(){
    double f,r,p=acos(-1),t1,t2;
    while(scanf("%lf",&f)!=EOF){
        t1=(63*p)/180.0;
        t2=(108*p)/180.0;
        r=(f/sin(t1))*sin(t2);
        printf("%.10lf\n",r);
    }
    return 0;
}
