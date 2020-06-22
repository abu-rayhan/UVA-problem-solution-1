#include<stdio.h>
long long a[1000000]={0},b[1000000];
void rayhan(){
    int i,j,c;
    for(i=2;i<=sqrt(999999);i++){
        for(j=2;i*j<=999999;j++){
            a[i*j]=1;
        }
    }
    a[0]=1;
    a[1]=1;
}
long long abu(long long x){
    int s=0;
    while(x!=0){
        s+=x%10;
        x=x/10;
    }
    return s;
}
int main(){
    rayhan();
    long long  c=0;
    long long n,ar,br,i;
    for(i=0;i<=999999;i++){
        if(a[i]==0&&a[abu(i)]==0)c++;
        b[i]=c;
    }
    scanf("%lld",&n);
    while(n--){
        scanf("%lld %lld",&ar,&br);
        printf("%lld\n",b[br]-b[ar-1]);
    }
    return 0;
}
