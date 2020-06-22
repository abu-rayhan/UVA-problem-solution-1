#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ll n,mx=0,i,x,c=0,p,r=0,j;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0,j=n-1;i<n/2;i++,j--){
        p=v[j]-v[i];
        r=abs(p-r);
    }
    if(n%2){
        r=abs(r-v[n/2]);
    }
    if(r==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
