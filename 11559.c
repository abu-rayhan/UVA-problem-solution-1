#include<stdio.h>

int main(){
    long long n,b,h,w,m,a,i,j,r,c,min,br;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)!=EOF){
        min=b+1;
        for(i=0;i<h;i++){
            scanf("%lld",&m);
            r=m*n;
            c=0;
            for(j=1;j<=w;j++){
                scanf("%lld",&br);
                if(br>=n)c=1;
            }
            if(c==0)r=b+1;
            if(r<min)min=r;
        }
        if(min>0&&min<=b)printf("%lld\n",min);
        else printf("stay home\n");
    }
    return 0;
}
