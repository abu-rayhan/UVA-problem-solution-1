#include<stdio.h>

int main(){
    long long i,n,a[109],j,k=0,x,z;
    while(scanf("%lld",&n)!=EOF){
            z=0;
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
         if(a[0]<1){printf("Case #%lld: It is not a B2-Sequence.\n\n",++k);continue;}
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){z=1;break;}
        }
        if(z==1){printf("Case #%lld: It is not a B2-Sequence.\n\n",++k);continue;}
        long long ar[20009]={0};
        z=0;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                ar[a[i]+a[j]]++;
                if(ar[a[i]+a[j]]>1){z=1;break;}
            }
            if(z==1)break;
        }
        if(z==0)printf("Case #%lld: It is a B2-Sequence.\n\n",++k);
        else printf("Case #%lld: It is not a B2-Sequence.\n\n",++k);
    }
    return 0;
}
