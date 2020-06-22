#include<stdio.h>

int main(){
    int t,x,y,r,i;
    double l1,l2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&x,&y,&r);
        l1=sqrt(x*x+y*y)+r;
        l2=r-sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",l2,l1);
    }
    return 0;
}
