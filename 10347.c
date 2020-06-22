#include<stdio.h>
#include<math.h>

int main(){
    double u,v,w,s,p;
    while(scanf("%lf %lf %lf",&u,&v,&w)!=EOF){
        s=(u+v+w)/2;
        if((s-u)<0||(s-v)<0||(s-w)<0||u<=0||v<=0||w<=0){
           printf("-1.000\n");
           continue;
        }
        p=s*(s-u)*(s-v)*(s-w);
        p=sqrt(p);
        p=(4.0/3.0)*p;
        if(p<=0)printf("-1.000\n");
        else printf("%.3lf\n",p);
    }
    return 0;
}
