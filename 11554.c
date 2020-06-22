#include<stdio.h>
long long a[1000001]={0};
void abu(){
    long long i,d,s,c=0;
    for(i=4;i<=1000000;i++){
        if(i%2==1){
            d=i/2;
            c+=d*(d-1);
        }
        else{
            d=i/2;
            s=(d*(d-1))/2;
            s+=((d-1)*(d-2))/2;
            c+=s;
        }
        a[i]=c;
    }
}
int main(){
    abu();
    long long t,n,i;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
