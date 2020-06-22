#include<stdio.h>
#include<math.h>

int main(){
    double t,l,d,h,v,x;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf %lf %lf",&l,&d,&h,&v);
        t=sqrt(2*h/9810.0);
        x=v*t;
        if(x>d+l){
            if(x>d+l+500)printf("FLOOR\n");
            else printf("EDGE\n");
        }
        if(x>d&&x<d+l){
            if(x-d<=500)printf("EDGE\n");
            else if(d+l-x<=500)printf("EDGE\n");
            else printf("POOL\n");
        }
        if(x<d){
            if(d-x<=500)printf("EDGE\n");
            else printf("FLOOR\n");
        }
    }
    return 0;
}
