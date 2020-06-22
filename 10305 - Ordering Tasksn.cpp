#include<bits/stdc++.h>

using namespace std;
int ar[109],m1;
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
    int n,m,i,x,y;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        vector<int>v[109];
        for(i=1;i<=m;i++){
            cin>>x>>y;
            v[x].push_back(y);
        }
        int vis[109]={0};
        m1=0;
        for(i=1;i<=n;i++){
            if(vis[i]==0){
                dfs(i,vis,v);
            }
        }
        for(i=m1-1;i>=0;i--)cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}
