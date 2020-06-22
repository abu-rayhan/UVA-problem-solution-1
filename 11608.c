#include<stdio.h>

int main(){
    int a[13],b[13],i,j,c,k=0,p;
    while(1){
        k++;
        scanf("%d",&a[0]);
        if(a[0]<0)break;
        p=a[0];
        for(i=1;i<13;i++)scanf("%d",&a[i]);
        for(i=0;i<12;i++)scanf("%d",&b[i]);
        printf("Case %d:\n",k);
        for(i=0;i<12;i++){
            if(p>=b[i]){
            printf("No problem! :D\n");
            p=p-b[i];
            }
            else{
                printf("No problem. :(\n");
            }
            p=p+a[i+1];
        }
    }
    return 0;
}
