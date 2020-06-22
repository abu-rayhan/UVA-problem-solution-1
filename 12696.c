#include<stdio.h>

int main(){
    int t,s=0,d;
    double l,w,h,o,c;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf %lf",&l,&w,&h,&o);
        if((l+w+h<=125.0&&o<=7.0)||(l<=56&&w<=45&&h<=25&&o<=7))d=1;
        else d=0;
        printf("%d\n",d);
        s+=d;
    }
    printf("%d\n",s);
    return 0;
}
