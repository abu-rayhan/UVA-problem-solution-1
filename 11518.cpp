#include<bits/stdc++.h>

using namespace std;
int main(){
    int t,u;
    cin>>t;
    while(t--){
        vector<int>a[10009];
        int v[10009]={0};
        int n,m,l,c=0;
        cin>>n>>m>>l;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
        }
        for(int i=0;i<l;i++){
            int x;
            cin>>x;
            queue<int>q;
            q.push(x);
            if(v[x]==false){v[x]=true;c++;
            while(!q.empty()){
                u=q.front();
                q.pop();
                for(int j=0;j<a[u].size();j++){
                    if(v[a[u][j]]==false){
                        v[a[u][j]]=true;
                        c++;
                        q.push(a[u][j]);
                    }
                }
            }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
