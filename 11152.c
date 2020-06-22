#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    double d,e,f,p=3.1415926535897,a1,a2,a3,r1,s,r;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        s=(a+b+c)/2.0;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        r=d/s;
        a1=p*r*r;
        a2=d-a1;
        r1=(a*b*c)/(4.0*d);
        a3=(p*r1*r1)-d;
        printf("%.4lf %.4lf %.4lf\n",a3,a2,a1);
    }
    return 0;
}

