#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,p,c,i,r;
    while(scanf("%lld",&n)!=EOF){
        p=1;
        r=0;
        for(i=0;;i++){
            r=(r*10+p)%n;
            if(r==0){c=i+1;break;}
        }
        cout<<c<<endl;
    }
    return 0;
}
