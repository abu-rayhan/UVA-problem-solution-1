#include<bits/stdc++.h>

using namespace std;
#define ll long long
    ll t,i,u,vp,m,x,y,cs=0,j,k;
    string s;
int main(){
    cin>>t;
    while(t--){
        if(cs)cout<<endl;
        map<string,ll>mp;
        map<ll,string>mp1;
        vector<ll>v[500];
        ll z=0,st,en;
        while(cin>>s){
            if(s=="*")break;
            if(mp[s]==0){
                z++;
                mp[s]=z;
            }
            mp1[mp[s]]=s;
        }
        for(i=1;i<=z;i++){
            for(j=1;j<=z;j++){
                if(i==j)continue;
                if(mp1[i].size()==mp1[j].size()){
                    ll c=0;
                    for(k=0;k<mp1[i].size();k++){
                        if(mp1[i][k]!=mp1[j][k])c++;
                    }
                    if(c==1){
                        v[i].push_back(j);
                        v[j].push_back(i);
                    }
                }
            }
        }
        cin.ignore();
        while(getline(cin,s)){
            string s1,s2;
            if(s.size()==0)break;
            z=1;
            for(i=0;i<s.size();i++){
                if(z){
                    if(s[i]!=' ')s1+=s[i];
                    else z=0;
                }
                else s2+=s[i];
            }
            //cout<<s1<<" "<<s2<<endl;
            st=mp[s1];
            en=mp[s2];
            queue<ll>q;
            ll ar[500]={0};
            q.push(st);
            ar[st]=1;
            while(!q.empty()){
                u=q.front();
                q.pop();
                for(i=0;i<v[u].size();i++){
                    if(ar[v[u][i]]==0){
                        ar[v[u][i]]=ar[u]+1;
                        q.push(v[u][i]);
                    }
                }
                if(ar[en])break;
            }
            cout<<s1<<" "<<s2<<" "<<ar[en]-1<<endl;
        }
        cs=1;
    }
    return 0;
}
