#include<stdio.h>
#include<stdlib.h>

int main()
{
    double d1,d2,d,f,p;
    char c;
    int h,m,i;
    for(i=1;i>=1;i++){
        scanf("%d %c %d",&h,&c,&m);
        if(h==0 && m==0){
            break;
        }
        if(m==0){
            if(h>=1 &&h<=6){
                d1=h*30.0;
                printf("%.3lf\n",d1);
                continue;
            }
            else{
                d1=360.0-(h*30);
                printf("%.3lf\n",d1);
                continue;
            }
        }
        d1=h*30;
        d2=m*6;
        d=abs(d1-d2);
        f=((5.0*(double)m)/60.0)*6.0;
        if(h*5<m){
            if(d>f)p=d-f;
            else p=f-d;
            if(p>(360.0-p)){
                printf("%.3lf\n",360.0-p);
            }
            else{
                printf("%.3lf\n",p);
            }
        }
        else{
            p=d+f;
            if(p>(360.0-p)){
                printf("%.3lf\n",360.0-p);
            }
            else{
                printf("%.3lf\n",p);
            }
        }
    }
    return 0;
}
