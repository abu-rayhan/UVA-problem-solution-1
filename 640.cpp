#include<bits/stdc++.h>
using namespace std;
long long a[1000009];
long long ds(long long x){
    long long s=0;
    while(x!=0){
        s+=(x%10);
        x/=10;
    }
    return s;
}
int main(){
    long long i,s;
    for(i=1;i<=1000000;i++){
        s=i+ds(i);
        if(s<=1000000)a[s]=1;
    }
    for(i=1;i<=1000000;i++){
        if(a[i]==0)cout<<i<<endl;
    }
    return 0;
}
