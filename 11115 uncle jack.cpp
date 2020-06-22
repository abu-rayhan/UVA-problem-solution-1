#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define pi acos(-1)
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
int main(){
    ll n,d1;
    while(cin>>n>>d1){
        if(!n&&!d1)break;
        ll a=1,b=1;
        for(ll i=1;i<=d1;i++){
            if(a>1e16){
                b=b*n;
            }
            else a=a*n;
        }
        vector<ll>v1,v2;
        //cout<<endl<<a<<" "<<b<<endl;
        while(a){
            v1.pb(a%10);
            a/=10;
        }
        while(b){
            v2.pb(b%10);
            b/=10;
        }
        vector<ll>ans;
        for(ll i=0;i<v2.size();i++){
            ll p=0;
            vector<ll>v;
            for(ll j=0;j<i;j++)v.pb(0);
            for(ll j=0;j<v1.size();j++){
                ll c=v1[j]*v2[i]+p;
                v.pb(c%10);
                p=c/10;
            }
            while(p){v.pb(p%10);p/=10;}
            ll g=0,h=0;
            while(g<v.size()&&h<ans.size()){
                ll c=ans[h]+v[g]+p;
                ans[h]=c%10;
                p=c/10;
                h++;
                g++;
            }
            while(g<v.size()){
                ll c=v[g]+p;
                ans.pb(c%10);
                p=c/10;
                g++;
            }
            while(h<ans.size()){
                ll c=ans[h]+p;
                ans[h]=c%10;
                p=c/10;
                h++;
            }
        }
        for(ll i=ans.size()-1;i>=0;i--)cout<<ans[i];
        cout<<endl;
    }
    return 0;
}
