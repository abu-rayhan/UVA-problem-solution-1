#include<stdio.h>

int main(){
    int n,a,b,i,s,j,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(a>=b){
            x=a;
            y=b;
        }
        else{
            x=b;
            y=a;
        }
        s=0;
        for(j=y;j<=x;j++){
            if(j%2!=0){
                s=s+j;
            }
        }
    printf("Case %d: %d\n",i,s);
    }
    return 0;
}
