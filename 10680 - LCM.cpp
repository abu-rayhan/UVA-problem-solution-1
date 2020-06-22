#include<bits/stdc++.h>

using namespace std;
#define mx 1000006
bool p1[mx];
vector<int>p;
void prime(){
    for(int i=2;i<=sqrt(mx);i++){
        if(p1[i]==0)
            for(int j=2*i;j<=mx;j+=i)p1[j]=1;
    }
    p.push_back(2);
    for(int i=3;i<=mx;i+=2){
        if(p1[i]==0)
            p.push_back(i);
    }
}
int main(){
    prime();
    int n,i,j,k;
    while(scanf("%d",&n)&&n){
        int five=0,two=0,s=0,ans=1,v;
        k=2;
        v=n;
        while(n/k){
            s=n/k;
            two++;
            n=s;
        }
        k=5;
        n=v;
        while(n/k){
            s=n/k;
            five++;
            n=s;
        }
        for(i=1;i<=five-two;i++){
            ans=(ans*5)%10;
        }
        for(i=1;i<=two-five;i++){
            ans=(ans*2)%10;
        }
        for(i=1;p[i]<=v;i++){
            if(p[i]==5)continue;
            s=0;
            k=p[i];
            n=v;
            while(n/k){
                s++;
                n=n/k;
            }
            for(j=1;j<=s;j++)ans=(ans*p[i])%10;
        }
        cout<<ans%10<<endl;
    }
    return 0;
}
