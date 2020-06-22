#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pr pair<ll,ll>
ll fx[]={0,0,1,-1};
ll fy[]={1,-1,0,0};
vector<pr>v[1000006];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ll x;
                cin>>x;
                v[i].push_back(make_pair(x,j));
            }
        }
        priority_queue<pr,vector<pr>,greater<pr> >pq;
        pq.push(make_pair(v[0][0].first,0));
        while(!pq.empty()){

        }
    }
    return 0;
}
