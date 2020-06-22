#include<stdio.h>

int main(){
    int m,n,a[100000],i,j,c;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n<=1||m<=1){
            printf("Boring!\n");
            continue;
        }
        a[0]=n;
        c=0;
        for(i=1;i<100000;i++){
            if(n%m==0){
                a[i]=n/m;
                c++;
                n=a[i];
                if(n==1){
                    for(j=0;j<c;j++)printf("%d ",a[j]);
                    printf("%d\n",a[c]);
                    break;
                }
            }
            else{
                printf("Boring!\n");
                break;
            }
        }
    }
    return 0;
}
