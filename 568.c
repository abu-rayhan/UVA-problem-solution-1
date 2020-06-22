#include<stdio.h>
int a[10000000];

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%5d -> %d\n",n,rayhan(n));
    }
    return 0;
}
int rayhan(int n){
    int i,c,p,m,j;
    a[0]=1;
    int l=1;
    for(i=2;i<=n;i++){
        for(j=0;j<l;j++){
            p=a[j]*i+c;
            a[j]=p%10;
            c=p/10;
        }
        while(c){
            a[l]=c%10;
            l++;
            c/=10;
        }
    }
    for(i=0;i<l;i++){
        if(a[i]>0){m=a[i];break;}
    }
    return m;
}
