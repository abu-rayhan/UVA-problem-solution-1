#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pi 2.0*acos(0)
int main(){
    ll t;
    cin>>t;
    getchar();
    while(t--){
        char s[100];
        gets(s);
        ll a=0,b=0,z=0,i;
        for(i=0;i<strlen(s)&&s[i]!=' ';i++){
            a=a*10+s[i]-'0';
        }
        for(ll j=i+1;j<strlen(s);j++){
            b=b*10+s[j]-'0';
            z=1;
        }
        //cout<<strlen(s)<<" "<<a<<" "<<b<<endl;
        if(z==0){
            cout<<fixed<<setprecision(4)<<(pi*a*a*1.0)/8.0<<endl;
            continue;
        }
        double d=pi*((a+b)*(a+b)-a*a-b*b);
        cout<<fixed<<setprecision(4)<<d<<endl;
    }
    return 0;
}
