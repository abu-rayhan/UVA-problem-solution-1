#include<stdio.h>

int main(){
    int n,i,j,s;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0)break;
        s=0;
        for(j=1;j<=n/2;j++){
            if(n%j==0){
                s+=j;
            }
        }
        if(i==1)
        printf("PERFECTION OUTPUT\n");
        if(s==n)printf("%5d  PERFECT\n",n);
        else if(s>n)printf("%5d  ABUNDANT\n",n);
        else printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
