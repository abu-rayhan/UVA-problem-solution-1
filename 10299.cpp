#include<bits/stdc++.h>

using namespace std;
#define mx 31630
bool p1[mx];
long long p[mx],m;
void prime(){
    long long i,j;
    for(i=2;i<=mx;i+=2)p1[i]=1;
    for(i=3;i<=sqrt(mx);i+=2){
        if(!p1[i])
        for(j=i*i;j<=mx;j+=i)p1[j]=1;
    }
    p[0]=2;
    m=1;
    for(i=3;i<=mx;i+=2){
        if(!p1[i]){
            p[m]=i;
            m++;
        }
    }
}
int main(){
    prime();
    long long i,j,n;
    while(scanf("%lld",&n)&&n){
        if(n==1){cout<<0<<endl;continue;}
        double r=n*1.0;
        for(i=0;p[i]*p[i]<=n&&i<m;i++){
            if(n%p[i]==0){
                while(n%p[i]==0){
                    n/=p[i];
                }
                r=r*(1.0-(1.0/p[i]));
            }
        }
        if(n!=1){
            r=r*(1.0-(1.0/n));
        }
        j=r;
        cout<<j<<endl;
    }
    return 0;
}
