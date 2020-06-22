#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n,l,i,p;
    while(scanf("%lld %lld",&n,&l)!=EOF){
        p=1;
        for(i=n-l+1;i<=n;i++){
            p=p*i;
            while(p%10==0){
                p=p/10;
            }
            p=p%100000000000;
        }
        cout<<p%10<<endl;
    }
    return 0;
}
