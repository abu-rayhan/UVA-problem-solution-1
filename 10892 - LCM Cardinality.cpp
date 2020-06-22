#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mx 44730
vector<ll>v;
bool p1[mx+2];
ll p[mx];
void prime(){
    for(ll i=2;i<=sqrt(mx);i+=2){
        if(!p1[i])
            for(ll j=i*i;j<=mx;j+=i)p1[j]=1;
    }
    v.push_back(2);
    for(ll i=3;i<=mx;i+=2){
        if(p1[i]==0){
            v.push_back(i);
        }
    }
}
int main(){
    prime();
    ll n;
    while(cin>>n){
        if(n==0)break;
        ll ans=1,p=n;
        for(ll i=0;v[i]*v[i]<=n;i++){
            ll c=0;
            while(n%v[i]==0){
                c++;
                n=n/v[i];
            }
            ans*=((2*c)+1);
        }
        if(n!=1){
            ans*=3;
        }
        ans++;
        cout<<p<<" "<<ans/2<<endl;
    }
    return 0;
}
