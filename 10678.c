#include<stdio.h>
#include<math.h>

int main(){
    int t;
    double d,l,a,b,p;
    p=2*acos(0);
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf",&d,&l);
        a=l/2.0;
        b=sqrt((a*a-((d*d)/4)));
        printf("%.3lf\n",p*a*b);
    }
    return 0;
}
