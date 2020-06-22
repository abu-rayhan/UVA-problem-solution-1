#include<stdio.h>

int main(){
    double a,b,c,d,e,f,g,p,m,x,y;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g);
        if(e<=f&&e<=g){
            x=f;
            y=g;
        }
        else if(f<=e&&f<=g){
            x=e;
            y=g;
        }
        else if(g<=e&&g<=f){
            x=e;
            y=f;
        }
        p=a+b+c+d;
        m=(x+y)/2;
        m=p+m;
        if(m>=90.0)printf("Case %d: A\n",i);
        else if(m<90.0&&m>=80.0)printf("Case %d: B\n",i);
        else if(m<80.0&&m>=70.0)printf("Case %d: C\n",i);
        else if(m<70.0&&m>=60.0)printf("Case %d: D\n",i);
        else if(m<60.0)printf("Case %d: F\n",i);
    }
    return 0;
}
