#include<stdio.h>

int main(){
    int a[10],n,t,i,d,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<10;i++)a[i]=0;
        for(i=1;i<=n;i++){
            r=i;
            while(r!=0){
                d=r%10;
                a[d]++;
                r=r/10;
            }
        }
        for(i=0;i<9;i++)printf("%d ",a[i]);
        printf("%d\n",a[9]);
    }
    return 0;
}
