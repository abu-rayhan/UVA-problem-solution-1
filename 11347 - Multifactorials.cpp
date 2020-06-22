#include<bits/stdc++.h>

using namespace std;
#define mx 1105
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
    ll t,i,j,k,h,n,c,r;
    cin>>t;
    getchar();
    for(j=1;j<=t;j++){
        char s[1000];
        ll c=0,n=0;
        gets(s);
        for(i=0;i<strlen(s);i++){
            if(s[i]!='!'){
                n=n*10+s[i]-'0';
            }
            else c++;
        }
        ll a[1000]={0};
        if(c>0){
            if(n%c==0)k=c;
            else k=n%c;
        }
        else{k=n;c=3;}
        for(i=k;i<=n;i+=c){
            r=i;
            for(h=0;h<p.size();h++){
                if(r%p[h]==0){
                    while(r%p[h]==0){
                        r=r/p[h];
                        a[h]++;
                    }
                }
                if(r==1)break;
            }
        }
        int z=0;
        ll ans=1;
        for(i=0;i<170;i++){
            if(1000000000000000000/(a[i]+1)<ans){z=1;break;}
            ans=ans*(a[i]+1);
        }
        if(z==0)printf("Case %lld: %lld\n",j,ans);
        else printf("Case %lld: Infinity\n",j);
    }
    return 0;
}
