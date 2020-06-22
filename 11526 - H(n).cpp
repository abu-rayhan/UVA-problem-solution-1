#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t,n,r,i;
    cin>>t;
    while(t--){
        cin>>n;
        r=0;
        for(i=1;i<=n/2;i++)r+=(n/i);
        r+=n/2;
        if(n%2)r++;
        cout<<r<<endl;
    }
    return 0;
}
