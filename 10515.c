#include<stdio.h>

int rayhan(int m,int n,int p){
    int h,x,y;
    if(n==0)return 1;
    if(n%2==0){
        h=rayhan(m,n/2,p);
        return (h*h)%p;
    }
    else {
        x=m%p;
        y=rayhan(m,n-1,p);
        return (x*y)%p;
    }
}
int main(){
    int m,n,p=10;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0&&n==0)break;
        printf("%d\n",rayhan(m,n,p));
    }
    return 0;
}
