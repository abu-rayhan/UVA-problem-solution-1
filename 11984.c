#include<stdio.h>

int main(){
    int n,c,d,i;
    double c1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&c,&d);
        c1=(5.0*d)/9.0;
        printf("Case %d: %.2lf\n",i,c1+c);
    }
    return 0;
}
