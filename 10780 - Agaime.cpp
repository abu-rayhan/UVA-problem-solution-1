#include<bits/stdc++.h>

using namespace std;
long long p[5000],m1;
bool p1[5005];
void prime(){
    long long i,j;
    for(i=2;i<=sqrt(5000);i++){
        if(p1[i]==0){
            for(j=2*i;j<=5000;j+=2)p1[j]=1;
        }
    }
    p[0]=2;
    m1=1;
    for(i=3;i<=5000;i+=2){
        if(p1[i]==0){
            p[m1]=i;
            m1++;
        }
    }
}
int main(){
    prime();
    long long n,m,t,i,c,k,r,mn,c1,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>m>>n;
        mn=1e18;
        for(j=0;p[j]*p[j]<=m;j++){
            if(m%p[j]==0){
                c=0;
                while(m%p[j]==0){
                    m/=p[j];
                    c++;
                }
                c1=0;
                k=p[j];
                while(n/k){
                    c1+=(n/k);
                    k*=p[j];
                }
                r=c1/c;
                mn=min(mn,r);
            }
        }
        if(m!=1){
                k=m;
                c1=0;
                while(n/k){
                    c1+=(n/k);
                    k*=m;
                }
                r=c1;
                mn=min(mn,r);
        }
        cout<<"Case "<<i<<":"<<endl;
        if(mn!=1e18&&mn!=0){
            cout<<mn<<endl;
        }
        else cout<<"Impossible to divide"<<endl;
    }
    return 0;
}
