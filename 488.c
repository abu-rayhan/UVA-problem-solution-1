#include<stdio.h>

int main(){
    int t,a,f,i,j,k,m;
    scanf("%d",&t);
    for(m=1;m<=t;m++){
        scanf("%d %d",&a,&f);
        for(k=1;k<=f;k++){
            for(i=1;i<=a;i++){
                for(j=1;j<=i;j++){
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=a-1;i>=1;i--){
                for(j=i;j>=1;j--){
                    printf("%d",i);
                }
                printf("\n");
            }
            if(k<f)printf("\n");
        }
        if(m<t)printf("\n");
    }
    return 0;
}
