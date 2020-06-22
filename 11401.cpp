#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
#define pi acos(-1)
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
ll ar[1000006];
int main(){
    fast;
    ll t,n,s=0;
    for(ll i=3;i<=1000000;i++){
        ll c=(i-1)/2;
        ar[i]=c+s+ar[i-1];
        s+=c;
    }
    //cout<<ar[3]<<" "<<ar[4]<<" "<<ar[5]<<endl;
    while(cin>>n){
        if(n<3)break;
        ll r=(n*(n-1)*(n-2))/6;
        cout<<r-ar[n]<<endl;
    }
    return 0;
}
/*1 2 3 4 5

1 2 3
1 3 4
1 4 5
2 3 5
        1 2 4
        1 2 5
        1 3 5
    2 3 4
    2 4 5
    3 4 5
*/















