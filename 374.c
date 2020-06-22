#include<stdio.h>
int rayhan(int b,int p,int m){
    int h,h1,t;
    if(p==0)return 1;
    if(p%2==0){
        t=rayhan(b,p/2,m);
        return (t*t)%m;
    }
    else if(p%2!=0){
        h=b%m;
        h1=rayhan(b,p-1,m);
        return (h*h1)%m;
    }
}

int main(){
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)!=EOF){
        printf("%d\n",rayhan(b,p,m));
    }
    return 0;
}
