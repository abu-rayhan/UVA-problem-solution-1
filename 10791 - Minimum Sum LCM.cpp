#include<bits/stdc++.h>

using namespace std;
#define mx 46350
#define ll long long
bool p1[mx];
vector<ll int>p;
void prime(){
    for(ll int i=2;i<=sqrt(mx);i++){
        if(p1[i]==0)
            for(ll int j=2*i;j<=mx;j+=2)p1[j]=1;
    }
    p.push_back(2);
    for(ll int i=3;i<=mx;i+=2){
        if(p1[i]==0)
            p.push_back(i);
    }
}
int main(){
    prime();
    long long int n,s,k,i,z=0,v;
    while(scanf("%lld",&n)&&n){
        s=0;
        v=n;
        for(i=0;p[i]*p[i]<=n;i++){
            if(n%p[i]==0){
                k=1;
                while(n%p[i]==0){
                    n=n/p[i];
                    k=k*p[i];
                }
                s+=k;
            }
        }
        if(n!=1)s+=n;
        if(s==v)s++;
        if(v==1)s=2;
        printf("Case %lld: %lld\n",++z,s);
    }
    return 0;
}
