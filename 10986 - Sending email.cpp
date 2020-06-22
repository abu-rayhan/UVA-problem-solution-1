#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define inf 100000000000000
int main(){
    ll t,n,m,s1,t1;
    cin>>t1;
    for(ll k=1;k<=t1;k++){
        cin>>n>>m>>s1>>t;
        vector<pair<ll,ll> >v[20004];
        for(ll j=0;j<m;j++){
            ll x,y,v1;
            cin>>x>>y>>v1;
            v[x].push_back(make_pair(y,v1));
            v[y].push_back(make_pair(x,v1));
        }
        ll dis[20004],vis[20004]={0};
        for(ll j=0;j<n;j++)dis[j]=inf;
        dis[s1]=0;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > pq;
        pq.push(make_pair(dis[s1],s1));
        while(!pq.empty()){
            pair<ll,ll>u=pq.top();
            pq.pop();
            ll s=u.first,f=u.second;
            if(vis[f])continue;
            vis[f]=true;
            for(ll i=0;i<v[f].size();i++){
                if(!vis[v[f][i].first]&&s+v[f][i].second<dis[v[f][i].first]){
                    dis[v[f][i].first]=s+v[f][i].second;
                    pq.push(make_pair(dis[v[f][i].first],v[f][i].first));
                }
            }
        }
        if(dis[t]!=inf)cout<<"Case #"<<k<<": "<<dis[t]<<endl;
        else cout<<"Case #"<<k<<": unreachable"<<endl;
    }
    return 0;
}
