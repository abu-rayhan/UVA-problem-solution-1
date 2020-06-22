#include<bits/stdc++.h>
#define    ll    long long int
#define    sz    1010

using namespace std;
ll r;
        char ar[150];

    ll t;
int main()
{
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll q;
        cin>>q;
        for(ll i=65;i<=91;i++)ar[i]=char(i);
        //for(ll i=65;i<=91;i++)cout<<char(i)<<" "<<ar[i]<<endl;
        while(q--){
            char a,b;
            cin>>a>>b;
            for(ll j=65;j<91;j++){
                if(ar[j]==b)ar[j]=a;
            }
        }
        for(ll i=0;i<s.size();i++){
            if(s[i]!='_')s[i]=ar[s[i]];
        }
        cout<<s<<endl;
    }
    return 0;
}

