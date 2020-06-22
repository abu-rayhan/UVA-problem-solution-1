#include<bits/stdc++.h>

using namespace std;
#define ll long long
    ll t,n;
    double p;
int main(){
    cin>>t;
    while(t--){
        cin>>n>>p;
        double res=0.0;
        for(ll k=n;k<=2*n-1;k++){
        ll i,j;
        double d1=1.0,d2=1.0,r=1.0;
        for(i=k+1,j=1;i<=2*n-1;i++,j++){
            r=r*(i/(j*1.0));
        }
        for(i=1;i<=k;i++)d1=d1*p;
        for(i=k+1;i<=2*n-1;i++)d2=d2*(1-p);
        //cout<<d1*d2<<endl;
        res+=r*d1*d2;
        }
        cout<<setprecision(2)<<fixed<<res<<endl;
    }
    return 0;
}
