#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll t,i,j,n,m,cs=0;
    cin>>t;
    while(t--){
        cin>>m>>n;
        if(cs)cout<<endl;
        cs=1;
        vector<ll>v[30];
        string s1,s2;
        while(m--){
            cin>>s1>>s2;
            v[s1[0]-'A'].push_back(s2[0]-'A');
            v[s2[0]-'A'].push_back(s1[0]-'A');
        }
        while(n--){
            cin>>s1>>s2;
            queue<ll>q;
            q.push(s1[0]-'A');
            ll vis[30]={0},parent[30]={0};
            while(!q.empty()){
                ll u=q.front();
                q.pop();
                for(i=0;i<v[u].size();i++){
                    if(vis[v[u][i]]==0){
                        vis[v[u][i]]=vis[u]+1;
                        q.push(v[u][i]);
                        parent[v[u][i]]=u;
                    }
                }
                if(vis[s2[0]-'A'])break;
            }
            ll now=s2[0]-'A';
            vector<ll>ans;
            ans.push_back(now);
            while(now!=s1[0]-'A'){
                ans.push_back(parent[now]);
                now=parent[now];
            }
            reverse(ans.begin(),ans.end());
            for(i=0;i<ans.size();i++){
                char c=ans[i]+'A';
                cout<<c;
            }
            cout<<endl;
        }
    }
}
