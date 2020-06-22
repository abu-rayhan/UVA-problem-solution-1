#include<stdio.h>
#include<math.h>

int main(){
    int t,i,l;
    double w,r,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&l);
        w=(6.0*l)/10.0;
        r=(2.0*l)/10.0;
        a=acos(-1);
        a=a*r*r;
        printf("%.2lf %.2lf\n",a,(w*l-a));
    }
    return 0;
}
