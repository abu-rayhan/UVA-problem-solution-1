#include<stdio.h>
long long a[1000001]={0};
void abu(){
    int i,j;
    for(i=2;i<=sqrt(1000000);i++){
        for(j=2;i*j<=1000000;j++)a[i*j]=1;
    }
    a[1]=a[0]=1;
}

int main(){
    long long i,j,ar[100],a1[1000],
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&x,&y);
        for(i=x;i<=y;i++){
            if(a[i]==0){ar[m]=i;m++;}
        }
        g=0;
        for(i=1;i<m;i++){
            a1[g]=ar[i]-ar[i-1];
            g++;
        }
        long long s[1000001]={0};
        for(i=0;i<g;i++)s[a1[i]]++;
        for()
    }
}
