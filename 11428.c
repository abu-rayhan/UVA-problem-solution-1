#include<stdio.h>
#include<math.h>

int main(){
    long long n,i,j,c,z,r,p,t;
    while(scanf("%lld",&n)&&n){
        c=0;
        for(i=1;i<=100;i++){
            r=n+i*i*i;
            for(j=1;j<=r;j++){
                p=j*j*j;
                if(p==r){t=j;c=1;break;}
                if(p>r)break;
            }
            if(c==1){
                printf("%lld %lld\n",t,i);
                break;
            }
        }
        if(c==0)printf("No solution\n");
    }
    return 0;
}
