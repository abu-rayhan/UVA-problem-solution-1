#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,t,a,i,z=0;
    while(1){
    vector<long long>v[10009];
    long long ar[10009]={0},ma=0;
        cin>>n;
        if(!n)break;
        for(i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            ar[x]=ar[y]=1;
            if(x>ma)ma=x;
            if(y>ma)ma=y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        while(1){
            cin>>a>>t;
        long long d[10009]={0},u;
            if(a==0&&t==0)break;
            queue<long long>q;
            q.push(a);
            d[a]=1;
            long long r=0;
            while(!q.empty()){
                u=q.front();
                q.pop();
                for(i=0;i<v[u].size();i++){
                    if(d[v[u][i]]==0){
                        d[v[u][i]]=d[u]+1;
                        q.push(v[u][i]);
                    }
                }
            }
            for(i=0;i<=ma;i++){
                if(ar[i]==1){
                    if(d[i]>t+1||d[i]==0)r++;
                }
            }
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",++z,r,a,t);
        }
    }
    return 0;
}
