#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,n,a,b,z=0,u,x,j;
    while(scanf("%d",&x)!=EOF){
        vector<int>v[21];
        for(i=1;i<=x;i++){
            int c;
            cin>>c;
            v[1].push_back(c);
            v[c].push_back(1);
        }
        for(i=2;i<20;i++){
            cin>>x;
            for(j=1;j<=x;j++){
                int c;cin>>c;
                v[i].push_back(c);
                v[c].push_back(i);
            }
        }
        cin>>n;
        printf("Test Set #%d\n",++z);
        for(i=0;i<n;i++){
            cin>>a>>b;
            queue<int>q;
            int w,t;
            if(a>b){w=b;t=a;}
            else{w=a;t=b;}
            int l[21]={0};
            q.push(w);
            while(!q.empty()){
                u=q.front();
                q.pop();
                for(j=0;j<v[u].size();j++){
                    if(l[v[u][j]]==0){
                        l[v[u][j]]=l[u]+1;
                        q.push(v[u][j]);
                    }
                }
                if(l[t]!=0)break;
            }
            printf("%2d to %2d: %d\n",a,b,l[t]);
        }
        cout<<endl;
    }
    return 0;
}
