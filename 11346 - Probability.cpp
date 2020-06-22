#include<bits/stdc++.h>

using namespace std;

int main(){
    double a,b,s;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b>>s;
        if(s==0){
            cout<<"100.000000%"<<endl;
            continue;
        }
        if(s>=a*b){
            cout<<"0.000000%"<<endl;
            continue;
        }
        double r1,r2,ans;
        r1=a*b;
        r2=r1-s-s*(log(r1/s));
        ans=r2/r1;
        cout<<setprecision(6)<<fixed<<ans*100.0<<"%"<<endl;
    }
    return 0;
}
