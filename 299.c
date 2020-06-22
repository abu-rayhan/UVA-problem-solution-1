#include<stdio.h>

int main(){
    int t,l,a[100],c,j,i,v;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&l);
        for(i=0;i<l;i++)scanf("%d",&a[i]);
        c=0;
        for(i=0;i<l;i++){
            while(a[i]!=i+1){
                for(j=i;j<l;j++){
                    if(a[j]==i+1){
                        v=a[j];
                        a[j]=a[j-1];
                        a[j-1]=v;
                        c++;
                    }
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
