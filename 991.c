#include<stdio.h>

int main(){
    long long n,i,a[11],j,k,c=0;
    while(scanf("%lld",&n)!=EOF){
        a[0]=1;
        a[1]=1;
        a[2]=2;
        for(i=3;i<=10;i++){
            a[i]=0;
            for(k=i-1,j=0;j<i;j++,k--){
                a[i]+=a[k]*a[j];
            }
        }
        if(c==1){
            printf("\n");
        }
        printf("%lld\n",a[n]);
        c=1;
    }
    return 0;
}
