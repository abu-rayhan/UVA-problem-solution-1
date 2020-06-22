#include<stdio.h>

int main()
{
    double h,u,d,f,a,b,c,e;
    int i,j,n;
    for(i=1;i>=1;i++){
        scanf("%lf %lf %lf %lf",&h,&u,&d,&f);
        if(h==0){
            break;
        }
        a=0;
        b=u;
        c=a+b;
        e=c-d;
        if(u>h||e<0){
            if(u>h)printf("success on day 1\n");
            else printf("failure on day 1\n");
            continue;
        }
        for(j=1;j>=1;j++){
            if(b>0){
                a=e;
                b=b-(u*(f/100.0));
                c=a+b;
                e=c-d;
            }
            else if(b<=0){
                a=e;
                c=a;
                e=c-d;
            }
            if(c>h||c<=0||e<0){
                n=j;
                break;
            }
        }
        if(c>h){
            printf("success on day %d\n",n+1);
        }
        else{
            printf("failure on day %d\n",n+1);
        }
    }
    return 0;
}
