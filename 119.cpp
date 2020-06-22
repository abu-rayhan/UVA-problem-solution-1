#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll n,z=0;
    while(cin>>n){
        vector<string>v;
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
//        for(ll i=0;i<n;i++)cout<<v[i]<<" ";
        map<string,ll>mp;
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            ll l,t;
            cin>>t>>l;
            ll y;
            if(l==0){}
            else{
                mp[s]=mp[s]-(t/l)*l;
            }
            //cout<<mp[s]<<endl;
            for(ll j=0;j<l;j++){
                cin>>s;
                mp[s]+=(t/l);
            }
        }
        if(z)cout<<endl;
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
        }
        z=1;
    }
    return 0;
}
