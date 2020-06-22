#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll res[40];
ll z,sum,mx,r,t;
ll n;
void solve(ll ar[],vector<ll>v){
    ll i;
    if(v.size()==n){
        if(res[v[n-1]+1]==0)return;
        for(i=0;i<n-1;i++){cout<<v[i]<<" ";}
        cout<<v[n-1]<<endl;
        return;
    }
    for(i=2;i<=n;i++){
        if(ar[i]==0){
            if(v.size()==n-1&&res[i+1]==0)continue;
            if(res[v[v.size()-1]+i]){
                v.push_back(i);
                ar[i]=1;
                solve(ar,v);
                ar[i]=0;
                v.pop_back();
                //cout<<i<<"   "<<ar[i]<<"    "<<v.size()<<" "<<v[v.size()-1]<<endl;
            }
        }
    }
}
int main(){
    res[2]=res[3]=res[5]=res[7]=res[11]=res[13]=1;
    res[17]=res[19]=res[23]=res[29]=res[31]=1;
    while(cin>>n){
        ll ar[20]={0};
        if(z)cout<<endl;
        ar[1]=1;
        vector<ll>v;
        v.push_back(1);
        cout<<"Case "<<++z<<":"<<endl;
        solve(ar,v);
    }
    return 0;
}

