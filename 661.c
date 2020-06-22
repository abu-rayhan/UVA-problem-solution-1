#include<stdio.h>

int main(){
    long long n,m,c,cap[100],w[1000],br,d,z=0,i,max;
    while(scanf("%lld %lld %lld",&n,&m,&c)&&n&&m&&c){
        for(i=1;i<=n;i++)scanf("%lld",&cap[i]);
        for(i=1;i<=m;i++)scanf("%lld",&w[i]);
        int b[100]={0};
        br=d=0;
        max=0;
        for(i=1;i<=m;i++){
            b[w[i]]++;
            if(b[w[i]]%2!=0)d+=cap[w[i]];
            else d-=cap[w[i]];
            if(max<d)max=d;
            if(d>c){br=1;break;}
        }
        if(br==1)printf("Sequence %lld\nFuse was blown.\n",++z);
        else{
            printf("Sequence %lld\nFuse was not blown.\n",++z);
            printf("Maximal power consumption was %lld amperes.\n",max);
        }
        printf("\n");
    }
    return 0;
}
