#include<stdio.h>

int main(){
    int n,k,p,i,a,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d %d %d",&n,&k,&p);
        j=k+p;
        while(j>n)j=j-n;
        printf("Case %d: %d\n",i,j);
    }
    return 0;
}
