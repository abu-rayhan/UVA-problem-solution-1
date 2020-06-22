#include<bits/stdc++.h>

using namespace std;
#define m 131071
long long bigmode(long long b,long long p){
    long long int x,y,z;
    if(p==0)return 1;
    else if(p%2==0){
        x=bigmode(b,p/2);
        return (x*x)%m;
    }
    else{
        y=b%m;
        z=bigmode(b,p-1);
        return (y*z)%m;
    }
}
int main(){
    long long i,j,s=0,n,p,v;
    char a[10009];

    while(cin>>a[0]){
        for(i=1;;i++){
            cin>>a[i];
            if(a[i]=='#')break;
        }
        n=i;
        p=n-1;
        s=0;
        for(i=0;i<n;i++){
            if(a[i]=='1'){
                v=bigmode(2,p);
                s=((s%m)+(v%m))%m;
            }
            p--;
        }
        s=s%m;
        if(s==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
