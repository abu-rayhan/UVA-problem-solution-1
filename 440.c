#include<stdio.h>

int main(){
    int i,w,m,n,r;
    while(scanf("%d",&n)&&n){
        for(m=1;m>=1;m++){
            w=0;
            for(i=2;i<=n;i++){
                w=(w+m)%i;
            }
            if(w==1){r=m;break;}
        }
        printf("%d\n",r);

    }
    return 0;
}
