#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,a[500],j,b,m,s,k,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&b);
        for(j=0;j<b;j++){
            scanf("%d",&a[j]);
        }
        for(k=0;k<b;k++){
            for(j=k+1;j<b;j++){
                if(a[k]>a[j]){
                   m=a[j];
                   a[j]=a[k];
                   a[k]=m;
                }
            }
        }
        x=a[b/2];
        s=0;
        for(j=0;j<b;j++){
            s+=(abs(x-a[j]));
        }
        printf("%d\n",s);
    }
    return 0;
}
