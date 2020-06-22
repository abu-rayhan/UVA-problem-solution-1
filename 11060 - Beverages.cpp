#include<bits/stdc++.h>

using namespace std;
int m1,ar[109];
void dfs(int n,int vis[],vector<int>v[]){
    vis[n]=1;
    for(int i=0;i<v[n].size();i++){
        if(vis[v[n][i]]==0){
            dfs(v[n][i],vis,v);
        }
    }
    ar[m1]=n;
    m1++;
}
int main(){
    int n,m,i,j,z=0;
    string s[109],x,y;
    while(cin>>n){
        map<string,int>mp;
        for(i=1;i<=n;i++){
            cin>>s[i];
            mp[s[i]]=i;
        }
        cin>>m;
        int x1,y1,x2,y2,indeg[109]={0},u;
        vector<int>v[109];
        for(i=0;i<m;i++){
            cin>>x>>y;
            v[mp[x]].push_back(mp[y]);
            indeg[mp[y]]++;
        }
        priority_queue<int,vector<int>,greater<int> >pq;
        for(i=1;i<=n;i++){
            if(indeg[i]==0)pq.push(i);
        }
        cout<<"Case #"<<++z<<": Dilbert should drink beverages in this order:";
        while(!pq.empty()){
            u=pq.top();
            cout<<" "<<s[u];
            pq.pop();
            for(i=0;i<v[u].size();i++){
                indeg[v[u][i]]--;
                if(indeg[v[u][i]]==0)pq.push(v[u][i]);
            }
        }
        cout<<"."<<endl;
    }
    return 0;
}
