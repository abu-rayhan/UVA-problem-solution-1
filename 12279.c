#include<stdio.h>

int main(){
    int n,a,p,m,i,t=0;
    while(scanf("%d",&n)&&n){
        p=m=0;
        for(i=0;i<n;i++){
            scanf("%d",&a);
            if(a==0)m++;
            else p++;
        }
        printf("Case %d: %d\n",++t,p-m);
    }
    return 0;
}
