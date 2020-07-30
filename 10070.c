#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define pi acos(-1)
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
ll yes(string s,ll p){
    ll n=0;
    for(ll i=0;i<s.size();i++){
        n=n*10+s[i]-'0';
        n=n%p;
    }
    if(n)return 0;
    else return 1;
}
int main(){
    string s;
    ll k=0;
    while(cin>>s){
        if(k)cout<<endl;
        ll f,h,fh,fi,ff,z=0,u=0;
        f=yes(s,4),h=yes(s,100),fh=yes(s,400),fi=yes(s,15),ff=yes(s,55);
        if((f&&!h)||fh){cout<<"This is leap year."<<endl;z=1;u=1;}
        if(fi){cout<<"This is huluculu festival year."<<endl;u=1;}
        if(z&&ff){cout<<"This is bulukulu festival year."<<endl;u=1;}
        if(!u)cout<<"This is an ordinary year."<<endl;
        k=1;
    }
    return 0;
}
