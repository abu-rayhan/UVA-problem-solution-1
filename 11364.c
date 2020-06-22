#include<stdio.h>

int main(){
    int t,n,a[100],i,j,m,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){m=a[j];a[j]=a[i];a[i]=m;}
            }
        }
        s=0;
        for(i=1;i<n;i++){
            s+=a[i]-a[i-1];
        }
        printf("%d\n",s+a[n-1]-a[0]);
    }
    return 0;
}
