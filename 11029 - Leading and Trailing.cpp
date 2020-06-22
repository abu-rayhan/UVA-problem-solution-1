#include<bits/stdc++.h>

using namespace std;
int firstdigits(long long n,long long k){
    double r;
    r=k*log10(n);
    r=pow(10,r-(int)r);
    return (int)(r*100);
}
int bigmode(long long n,long long k){
    long long h,h1,r;
    if(k==0)return 1;
    if(k==1)return n%1000;
    else if(k%2){
        h=bigmode(n,1);
        h1=bigmode(n,k-1);
        return (h*h1)%1000;
    }
    else{
        r=bigmode(n,k/2);
        return (r*r)%1000;
    }
}
int main(){
    long long t,n,k,f,l1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        f=firstdigits(n,k);
        cout<<f<<"...";
        l1=bigmode(n,k);
        if(l1>9&&l1<100)cout<<0<<l1;
        else if(l1>=0&&l1<10)cout<<0<<0<<l1;
        else cout<<l1;
        cout<<endl;
    }
    return 0;
}
