#include<stdio.h>

int main(){
    int n,q,a[10000],b[100000],c,i,j,k,m;
    for(i=1;i>=1;i++){
        scanf("%d %d",&n,&q);
        if(n==0&&q==0)break;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<q;j++)scanf("%d",&b[j]);
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[j]>a[k]){m=a[k];a[k]=a[j];a[j]=m;}
            }
        }
        printf("CASE# %d:\n",i);
        for(j=0;j<q;j++){
                c=0;
            for(k=0;k<n;k++){
                if(b[j]==a[k]){printf("%d found at %d\n",b[j],k+1);break;}
                else c++;
            }
            if(c==n)printf("%d not found\n",b[j]);
        }
    }
    return 0;
}
