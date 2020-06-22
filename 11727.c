#include<stdio.h>

int main()
{
    int n,a[3],i,max,min,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[j]);
        }
        if((a[0]==a[1]&&a[1]==a[2]) || (a[0]==a[1] && a[1]!=a[2])||(a[0]==a[2] && a[1]!=a[2])){
            printf("Case %d: %d\n",i,a[0]);
            continue;
        }
        else if(a[1]==a[2] && a[0]!=a[1]){
            printf("Case %d: %d\n",i,a[1]);
            continue;
        }
        max=a[0];
        min=a[0];
        for(j=1;j<3;j++){
            if(max<a[j]){
                max=a[j];
            }
            else if(min>a[j]){
                min=a[j];
            }
        }
        for(k=0;k<3;k++){
            if(a[k]!=max && a[k]!=min){
                printf("Case %d: %d\n",i,a[k]);
                break;
            }
        }
    }
    return 0;
}
