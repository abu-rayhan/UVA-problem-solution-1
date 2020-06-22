#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
   ll n,m,c,z=0;
   while(cin>>n>>m>>c){
        if(!n&&!m&&!c)break;
        ll ar[n+5],a[n+5];
        memset(ar,0,sizeof(ar));
        for(ll i=1;i<=n;i++)cin>>a[i];
        vector<ll>v;
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll mx=0,c1=0;
        for(ll i=0;i<m;i++){
            if(ar[v[i]]==0){
                ar[v[i]]=1;
                c1+=a[v[i]];
            }
            else{
                ar[v[i]]=0;
                c1-=a[v[i]];
            }
            mx=max(mx,c1);
        }
        cout<<"Sequence "<<++z<<endl;
        if(mx>c)cout<<"Fuse was blown."<<endl;
        else cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<mx<<" amperes."<<endl;
        cout<<endl;
   }
   return 0;
}
