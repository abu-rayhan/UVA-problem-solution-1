#include<stdio.h>
#include<math.h>

double main(){
    double n,a,i,s;
    while(scanf("%lf %lf",&n,&a)!=EOF){
        s=0.0;
        for(i=1;i<=n;i++){
            s=s+(i*pow(a,i));
        }
        printf("%.lf\n",s);
    }
    return 0;
}
