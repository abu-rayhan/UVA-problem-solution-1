#include<stdio.h>

int main(){
    double a,b,c,d,e,f,g,h,x,y,df;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h)!=EOF){
        if(a==c&&b==d){
            if(g>a){df=g-a;x=e+df;}
            else{df=a-g;x=e-df;}
            if(h>b){df=h-b;y=f+df;}
            else {df=b-h;y=f-df;}
        }
        else if(a==e&&b==f){
            if(g>a){df=g-a;x=c+df;}
            else{df=a-g;x=c-df;}
            if(h>b){df=h-b;y=d+df;}
            else {df=b-h;y=d-df;}
        }
        else if(a==g&&b==h){
            if(e>a){df=e-a;x=c+df;}
            else{df=a-e;x=c-df;}
            if(f>b){df=f-b;y=d+df;}
            else {df=b-f;y=d-df;}
        }
        else if(c==e&&d==f){
            if(g>c){df=g-c;x=a+df;}
            else {df=c-g;x=a-df;}
            if(h>d){df=h-d;y=b+df;}
            else {df=d-h;y=b-df;}
        }
        else if(e==g&&f==h){
            if(c>e){df=c-e;x=a+df;}
            else{df=e-c;x=a-df;}
            if(d>f){df=d-f;y=b+df;}
            else {df=f-d;y=b-df;}
        }
        else if(c==g&&d==h){
            if(e>c){df=e-c;x=a+df;}
            else {df=c-e;x=a-df;}
            if(f>d){df=f-d;y=b+df;}
            else {df=d-f;y=b-df;}
        }
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}
