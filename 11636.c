#include<stdio.h>

int main(){
    int n,i,a,j;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n<0)break;
        j=1;
        a=1;
        while(a!=n){
            j=j*2;
            a++;
            if(j>=n)break;
        }
        printf("Case %d: %d\n",i,a-1);
    }
    return 0;
}
