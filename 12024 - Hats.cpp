#include<bits/stdc++.h>

using namespace std;
#define ll long long
    ll t,n;
    double p;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        ll r=1,i,j,z;
        for(i=1;i<=n;i++)r*=i;
        double res=0;
        for(i=2;i<=n;i++){
            ll r1=1;
            for(j=1;j<=i;j++)r1*=j;
            if(i%2)z=-1;
            else z=1;
            res+=(1.0/r1)*z*1.0;
        }
        double d=r*1.0,d1;
        d1=(r*res);
        cout<<(ll)d1<<"/"<<r<<endl;
    }
    return 0;
}

