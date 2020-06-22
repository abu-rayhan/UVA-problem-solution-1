#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n,s,way[150]={0},i,j;
    way[0]=1;
    for(i=1;i<=149;i++){
        for(j=1;j<=6;j++){
            if(i>=j){
                way[i]+=way[i-j];
            }
        }
    }
    cout<<way[9]<<endl;
}
