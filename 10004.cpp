#include<bits/stdc++.h>

using namespace std;

int main(){

    int a,e,x,y,u,i,j;

    while(scanf("%d",&a)&&a){
        cin>>e;
        vector<int>n[209];
        int d[209]={0};
        for(i=0;i<e;i++){
            cin>>x>>y;
            n[x].push_back(y);
            n[y].push_back(x);
        }
        queue<int>q;
        q.push(x);
        d[x]=1;
        y=1;
        while(!q.empty()){
            u=q.front();
            q.pop();
            for(i=0;i<n[u].size();i++){
                if(d[n[u][i]]!=0&&d[n[u][i]]==d[u]){y=0;break;}
                if(d[n[u][i]]==0){
                    if(d[u]==1)d[n[u][i]]=2;
                    else d[n[u][i]]=1;
                    q.push(n[u][i]);
                }
            }
            if(y==0)break;
        }
        if(y)cout<<"BICOLORABLE.\n";
        else cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}
