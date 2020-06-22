#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,i,j,x,y;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        int indeg[101]={0},vis[101]={0};
        vector<int>v[101];
        for(i=0;i<m;i++){
            cin>>x>>y;
            indeg[y]++;
            v[x].push_back(y);
        }
        for(i=1;i<=n;i++){
            if(indeg[i]==0){
                if(vis[i]==0)cout<<i<<" ";
                vis[i]=1;
                for(j=0;j<v[i].size();j++){
                    indeg[v[i][j]]--;
                    if(indeg[v[i][j]]==0&&vis[v[i][j]]==0){
                        cout<<v[i][j]<<" ";
                        vis[v[i][j]]=1;
                    }
                }
            }
        }
        for(i=1;i<=n;i++){
            if(vis[i]==0)cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
