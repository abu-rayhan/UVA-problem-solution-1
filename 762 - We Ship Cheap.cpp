#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll t,i,u,vp,m,x,y,cs=0;
    string s,s1,s2;
    while(cin>>t){
        if(cs)cout<<endl;
        cs=1;
        map<string,ll>mp;
        map<ll,string>mp1;
        vector<ll>v[100000];
        ll z=0,st,en;
        for(i=0;i<=t;i++){
            cin>>s>>s1;
            if(mp[s]==0){
                z++;
                mp[s]=z;
            }
            if(mp[s1]==0){
                z++;
                mp[s1]=z;
            }
            mp1[mp[s]]=s;
            mp1[mp[s1]]=s1;
            if(i==t){
                st=mp[s];
                en=mp[s1];
            }
            else{
                v[mp[s]].push_back(mp[s1]);
                v[mp[s1]].push_back(mp[s]);
            }
        }
        //cout<<z<<endl;
        queue<ll>q;
        q.push(st);
        ll ar[z+15],ans[z+15];
        for(i=0;i<=z;i++)ar[i]=0;
        ar[st]=1;
        while(!q.empty()){
            u=q.front();
            q.pop();
            for(i=0;i<v[u].size();i++){
                if(ar[v[u][i]]==0){
                    ar[v[u][i]]=ar[u]+1;
                    q.push(v[u][i]);
                    ans[v[u][i]]=u;
                }
            }
            if(ar[en])break;
        }
        if(ar[en]==0){
            printf("No route\n");
            continue;
        }
        ll now=en;
        vector<ll>ans1;
        ans1.push_back(en);
        while(now!=st){
            ans1.push_back(ans[now]);
            now=ans[now];
        }
        reverse(ans1.begin(),ans1.end());
        vector<ll>ans2;
        for(i=0;i<ans1.size();i++){
            if(i==0||i==ans1.size()-1)ans2.push_back(ans1[i]);
            else{
                ans2.push_back(ans1[i]);
                ans2.push_back(ans1[i]);
            }
        }
        for(i=0;i<ans2.size();i++){
            if(i%2)cout<<mp1[ans2[i]]<<endl;
            else cout<<mp1[ans2[i]]<<" ";
        }
    }
    return 0;
}
