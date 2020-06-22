#include<stdio.h>
#include<math.h>

int main(){
    double s,t,ar,ch,l;
    char a[10];
    while(scanf("%lf %lf %s",&s,&t,a)!=EOF){
        if(a[0]=='m'){
            if(t>10800)t=21600-t;
            t=t/60;
        }
        else{
            if(t>180)t=360-t;
        }
        t=(t*acos(-1))/180;
        ar=(6440+s)*t;
        ch=sqrt(2*(6440+s)*(6440+s)*(1-cos(t)));
        printf("%.6lf %.6lf\n",ar,ch);
    }
    return 0;
}
