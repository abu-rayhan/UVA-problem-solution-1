#include<stdio.h>
long long a[1000009],b[1000009],r[1000009];
int main(){
    long long t,i,j,m,x,y,z=0,rem,c,g,v;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&m);
        if(z==1)printf("\n");
        for(i=0;i<m;i++){
            scanf("%lld %lld",&x,&y);
            a[i]=x;b[i]=y;
        }
        rem=0;
        for(i=m-1,g=0;i>=0;i--,g++){
            v=a[i]+b[i]+rem;
            r[g]=v%10;
            rem=v/10;
        }
        if(rem>0){r[g]=rem;g++;}
        for(i=g-1;i>=0;i--)printf("%lld",r[i]);
        printf("\n");
        z=1;
    }
    return 0;
}
