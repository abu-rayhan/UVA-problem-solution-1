#include<stdio.h>
#include<math.h>

int main(){
    double x,y,x1,y1,x2,y2,a,b,c,d,s,f;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&x1,&y1,&x2,&y2)!=EOF){
        a=sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
        b=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        c=sqrt(((x-x2)*(x-x2))+((y-y2)*(y-y2)));
        s=(a+b+c)/2;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        f=(a*b*c)/(4*d);
        f=2*f*3.141592653589793;
        printf("%.2lf\n",f);
    }
    return 0;
}
