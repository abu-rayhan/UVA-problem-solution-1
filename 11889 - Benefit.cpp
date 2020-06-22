#include<bits/stdc++.h>

using namespace std;
#define mx 3170
#define ll long long int
bool p1[mx];
vector<ll>p;
void prime(){
    for(ll i=2;i<=sqrt(mx);i++){
        if(p1[i]==0)
            for(ll j=2*i;j<mx;j+=i)p1[j]=1;
    }
    p.push_back(2);
    for( ll i=3;i<mx;i+=2){
        if(p1[i]==0)
            p.push_back(i);
    }
}
int main(){
    prime();
    ll t,a,b,c,c1,a1,i,j,ans;
    cin>>t;
    while(t--){
        cin>>a>>c;
        if(c%a!=0){
            cout<<"NO SOLUTION"<<endl;
            continue;
        }
        ans=1;
        for(i=0;p[i]*p[i]<=c;i++){
            c1=a1=0;
            while(c%p[i]==0){
                c1++;
                c/=p[i];
            }
            while(a%p[i]==0){
                a1++;
                a/=p[i];
            }
            if(c1>a1){
                for(j=1;j<=c1;j++)ans*=p[i];
            }
        }
        if(c!=1){
            if(c!=a)ans*=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
