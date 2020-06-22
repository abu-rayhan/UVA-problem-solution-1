#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
ll gcd(ll a,ll b){
    while(b!=0){
        ll r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    ll n,m,i,c,j;
    while(cin>>n>>m){
        if(!n&&!m)break;
        vector<ll>v;
        ll s=0;
        for(i=1;i<=n;i++){
            for(j=1;j<m;j++)cin>>c;
            cin>>c;
            v.pb(c);
            s+=c;
        }
        for(i=1;i<=n;i++){
            ll g=gcd(v[i-1],s);
            ll lob=v[i-1]/g;
            ll hor=s/g;
            cout<<lob<<" / "<<hor<<endl;
        }
    }
    return 0;
}

