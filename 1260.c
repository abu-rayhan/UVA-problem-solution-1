#include<stdio.h>

int main(){
    int t,n,a[1000],i,j,s,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        s=0;
        for(i=1;i<n;i++){
            c=0;
            for(j=0;j<i;j++){
                if(a[j]<=a[i])c++;
            }
            s+=c;
        }
        printf("%d\n",s);
    }
    return 0;
}
