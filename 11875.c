#include<stdio.h>

int main()
{
    int n,a,b[11],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        for(j=0;j<a;j++){
            scanf("%d",&b[j]);
        }
        printf("Case %d: %d\n",i,b[a/2]);
    }
    return 0;
}
