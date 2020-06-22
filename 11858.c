#include<stdio.h>
long long a[100000000];

int main(){
    long long n,i,j,c,m;
    while(scanf("%lld",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        c=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    m=a[i];
                    a[j]=a[i];
                    a[i]=m;
                    c++;
                }
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
