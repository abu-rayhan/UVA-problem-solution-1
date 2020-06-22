#include<stdio.h>

int main(){
    int n,i,a,s;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0)break;
        s=0;
        while(1){
            a=n/3;
            s+=a;
            n=a+n-a*3;
            if(n==2)n=3;
            if(n<2)break;
        }
        printf("%d\n",s);
    }
    return 0;
}
