#include<stdio.h>
#include<math.h>
int main(){
    double r1,r2,r3,A,t1,t2,t3,s,s1,a,b,c;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        a=r1+r3;
        b=r1+r2;
        c=r2+r3;
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        t1=(b*b+c*c-a*a)/(2*b*c);
        t2=(a*a+c*c-b*b)/(2*a*c);
        t3=(a*a+b*b-c*c)/(2*a*b);
        s1=0.5*(r2*r2*acos(t1)+r1*r1*acos(t3)+r3*r3*acos(t2));
        printf("%.6lf\n",A-s1);
    }
    return 0;
}
