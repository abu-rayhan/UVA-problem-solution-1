#include<stdio.h>

int main(){
    long long n,i,s,s1,a[100001],l,c,j;
    while(scanf("%lld %lld",&n,&s)!=EOF){
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        l=n;
        for(i=0;i<n-1;i++){
                s1=c=0;
            for(j=i;j<n;j++){
                s1+=a[j];
                c++;
                if(s1>=s)break;
            }
            if(c<l&&s1>=s)l=c;
        }
        if(a[n-1]>=s)l=1;
        if(l==n)l=0;
        printf("%lld\n",l);
    }
    return 0;
}
