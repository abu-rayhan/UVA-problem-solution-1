#include<stdio.h>

int main(){
    int t,n,a,b,c,p,r,i,f,s,g;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        p=n;c=0;
        while(p!=0){
            g=p%10;
            p/=10;
            c++;
        }
        p=c*9;
        f=0;
        for(i=n-p;i<=n;i++){
            r=s=i;
            while(r!=0){
                s+=(r%10);
                r/=10;
            }
            if(s==n){
                f=1;
                printf("%d\n",i);
                break;
            }
        }
        if(f==0)printf("0\n");
    }
    return 0;
}
