#include<stdio.h>

int main(){
    int t,n,a[50],i,j,h,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        h=0;
        l=0;
        for(j=1;j<n;j++){
            if(a[j]-a[j-1]>0)h++;
            else if(a[j]-a[j-1]<0)l++;
        }
        printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}
