#include<bits/stdc++.h>

using namespace std;
int func(int n){
    for(int j=1;;j++){
        int i,a[152]={0},c=0,d=1;
        a[1]=1;
        for(i=2;i<=n;i++){
            if(a[i]!=1)c++;
            if(c==j){a[i]=1;d++;c=0;}
            if(d==n-1)break;
            if(i==n)i=1;
        }
        if(a[2]==0)return j;
    }
}
int main(){
    int n,t,i,k,r;
    while(scanf("%lld",&n)&&n){
        r=func(n);
        cout<<r<<endl;
    }
    return 0;
}
