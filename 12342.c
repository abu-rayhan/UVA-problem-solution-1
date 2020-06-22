#include<stdio.h>
#include<math.h>

int main(){
    double a1,a2,a3,a4;
    int t,a,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&a);
        if(a<=180000){
            printf("Case %d: 0\n",i);
            continue;
        }
        if(a<=480000){
            a1=(a-180000)*.1;
            if(a1>0&&a1<2000)a1=2000;
            printf("Case %d: %.lf\n",i,ceil(a1));
            continue;
        }
        if(a<=880000){
            a2=300000*.1+(a-480000)*.15;
            printf("Case %d: %.lf\n",i,ceil(a2));
            continue;
        }
        if(a<=1180000){
            a3=300000*.1+400000*.15+(a-880000)*.2;
            printf("Case %d: %.lf\n",i,ceil(a3));
            continue;
        }

        if(a>1080000){
            a4=300000*.1+400000*.15+300000*.2+(a-1180000)*.25;
            printf("Case %d: %.lf\n",i,ceil(a4));
        }
    }
    return 0;
}
