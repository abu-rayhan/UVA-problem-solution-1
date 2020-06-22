#include<bits/stdc++.h>

using namespace std;
#define mx 46350
#define ll long long int
bool p1[mx];
vector<ll>p;
void prime(){
    for(ll i=2;i<=sqrt(mx);i++){
        if(p1[i]==0)
            for(ll j=2*i;j<mx;j+=i)p1[j]=1;
    }
    p.push_back(2);
    for( ll i=3;i<mx;i+=2){
        if(p1[i]==0)
            p.push_back(i);
    }
}
bool isprime(ll n){
    for(ll i=0;p[i]*p[i]<=n;i++){
        if(n%p[i]==0)return 0;
    }
    return 1;
}
int main(){
    prime();
    ll n,d,c,i,x;
    while(cin>>n){
        x=n;
        d=1;
        for(i=0;p[i]*p[i]<=n;i++){
            c=0;
            while(n%p[i]==0){
                c++;
                n/=p[i];
            }
            d*=(c+1);
        }
        if(n!=1)d*=2;
        c=0;
        if(x%2!=0)c++;
        for(i=3;i<=x/2;i+=2){
            if(x%i!=0){
                if(isprime(i)==0)c++;
            }
        }
        cout<<d<<"  "<<c<<endl;
        cout<<n-d-c<<endl;
    }
    return 0;
}
