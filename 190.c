#include<stdio.h>
#include<math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3,r,c,x,y,g,f,e,m,d;
    char p,q,s,t,u;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
        x=((pow(x1,2)+pow(y1,2))*(y2-y3)+(pow(x2,2)+pow(y2,2))*(y3-y1)+(pow(x3,2)+pow(y3,2))*(y1-y2))/(2*(x1*(y2-y3)-y1*(x2-x3)+x2*y3-x3*y2));
        y=((pow(x1,2)+pow(y1,2))*(x3-x2)+(pow(x2,2)+pow(y2,2))*(x1-x3)+(pow(x3,2)+pow(y3,2))*(x2-x1))/(2*(x1*(y2-y3)-y1*(x2-x3)+x2*y3-x3*y2));
        r=sqrt(pow(x-x1,2)+pow(y-y1,2));
        g=-x;
        f=-y;
        m=2*g;
        d=2*f;
        c=(g*g)+(f*f)-(r*r);
        e=-c;
        if(x>0){p = '-';}
        else {p = '+';}
        if(y>0){q = '-';}
        else {q = '+';}
        if(x<0)x=-x;
        if(y<0)y=-y;
        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n",p,x,q,y,r);
        if(m>0){s = '+';}
        else {s = '-';}
        if(d>0){t = '+';}
        else {t = '-';}
        if(e>0) {u = '-';}
        else {u = '+';}
        if(m<0)m=-m;
        if(d<0)d=-d;
        if(e<0)e=-e;
        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n\n",s,m,t,d,u,e);

    }
    return 0;
}
