#include<stdio.h>

int main(){
    double s,d,i,p;
    while(scanf("%lf %lf",&s,&d)!=EOF){
        p=d;
        d=0;
        for(i=1;i>=1;i++){
            d=d+s;
            if(d>=p){
                printf("%.lf\n",s);
                break;
            }
            s=s+1;
        }
    }
    return 0;
}
