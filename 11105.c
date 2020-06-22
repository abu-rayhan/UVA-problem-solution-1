#include<stdio.h>
long long a[1000009]={0},hp[100000],r[1000001],m,c,he[1000009]={0};
void hprime(){
    long long i,j,k=5,p;
    for(i=5;i<=sqrt(1000008);i+=4){
            for(j=2*k;j<=1000008;j+=k)a[j]=1;
            k+=4;
            while(a[k]==1)k+=4;
    }
    m=0;
    for(i=5;i<=1000001;i+=4){
        if(a[i]==0&&(i%4)==1){hp[m]=i;m++;}
    }
    c=0;
    for(i=0;i<m;i++){
        if(hp[i]*hp[i]>1000001)break;
        for(j=i;j<m;j++){
            p=hp[i]*hp[j];
            if(p>1000001)break;
            if(he[p]==0){
                r[c]=p;
                c++;
                he[p]++;
            }
        }
    }
}
int main(){
    hprime();
    long long n,i,d,j;
    while(scanf("%lld",&n)&&n){
            d=0;
        for(i=0;i<c;i++){
            if(r[i]<=n)d++;
        }
        printf("%lld %lld\n",n,d);
    }
    return 0;
}
