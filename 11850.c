#include<stdio.h>

int main(){
    int n,a[1423],i,c,m,j;
    while(scanf("%d",&n)){
        if(n==0)break;
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){m=a[j];a[j]=a[i];a[i]=m;}
            }
        }
        c=0;
        for(i=1;i<n;i++){
            if(a[i]-a[i-1]>200)c++;
        }
        if(c>0)printf("IMPOSSIBLE\n");
        else if(1422-(a[n-1]+200-1422)>a[n-1])printf("IMPOSSIBLE\n");
        else printf("POSSIBLE\n");
    }
    return 0;
}
