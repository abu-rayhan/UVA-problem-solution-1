#include<bits/stdc++.h>

using namespace std;
#define mx 1000100
#define ll long long
bool p1[mx];
vector<ll>p;
void prime(){
    ll i,j;
    for(i=3;i*i<=(mx);i+=2){
        if(!p1[i])
            for(j=i*i;j<=mx;j+=i)p1[j]=1;
    }
    p.push_back(2);
    for(i=3;i<=mx;i+=2){
        if(!p1[i])p.push_back(i);
    }
}
//78499
int main(){
    prime();
    ll n,i,j,c,z,x,s;
    while(cin>>n){
        c=s=0;
        for(i=0;i<p.size();i++){
            x=p[i];
            c=z=0;
            while(n/x){
                c+=n/x;
                x=x*p[i];
                z=1;
            }
            s+=c;
            if(!z)break;
        }
        cout<<s<<endl;
    }
    return 0;
}
