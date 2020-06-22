#include<bits/stdc++.h>

using namespace std;
#define mx 1000008
#define ll long long
bool p1[1009];
ll ar[mx],ans[mx];
vector<ll>p;
void prime(){
    ll i,j;
    for(i=2;i*i<=(1000);i++){
        if(!p1[i])
            for(j=2*i;j<=1000;j+=i)p1[j]=1;
    }
    p.push_back(2);
    for(i=3;i<=1000;i+=2){
        if(p1[i]==0)p.push_back(i);
    }
}
int main(){
    prime();
    ll n,i,j,c,z,x,s;
    for(j=2;j<=1000000;j++){
        s=0;
        x=j;
        for(i=0;i<p.size()&&p[i]*p[i]<=j;i++){
            c=0;
            while(x%p[i]==0){
                x=x/p[i];
                c++;
            }
            s+=c;
            if(x==1)break;
        }
        if(x!=1)s++;
        ar[j]=s;
        ans[j]=ans[j-1]+s;
    }
    while(cin>>n){
        cout<<ans[n]<<endl;
    }
    return 0;
}

