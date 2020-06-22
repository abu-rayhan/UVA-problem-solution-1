#include<stdio.h>
#include<math.h>

int main(){
    long long n,i,t,r,x,c,j;
    for(i=1;i>=1;i++){
        scanf("%lld",&n);
        r=0;
        t=n;
        while(t!=0){
            r=r*10;
            r=r+t%10;
            t=t/10;
        }
        if(r==n){c=0;x=sqrt(n);
            for(j=2;j<=x;j++){
                if(n%j==0)c++;
            }
            if(c==0){
                printf("%lld\n",n*2);
                break;
            }
            else printf("%lld\n",n*2);
        }
        else printf("%lld\n",n*2);
    }
    return 0;
}
