#include<bits/stdc++.h>

using namespace std;

int main(){
     unsigned long long n,d,m;
    while(1){
        cin>>d;
        if(d==0)break;
        n=(10*d)/9;
        if(n%10==0)cout<<n-1<<" ";
        cout<<n;
        cout<<endl;
    }
    return 0;
}
