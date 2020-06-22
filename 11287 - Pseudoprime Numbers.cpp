#include<bits/stdc++.h>

using namespace std;
long long a[31625];
void prime(){
    long long i,j;
    for(i=2;i<=sqrt(31623);i++){
        if(a[i]==0){
            for(j=2*i;j<=31623;j+=i)a[j]=1;
        }
    }
}
long long mode(long long b,long long p,long long m){
    long long t,h;
    if(p==0)return 1;
    if(p%2==0){
        t=mode(b,p/2,m);
        return (t*t)%m;
    }
    else{
        t=b%m;
        h=mode(b,p-1,m);
        return (t*h)%m;
    }
}
int main(){
    long long p,an,z,i;
    while(scanf("%lld %lld",&p,&an)&&p&&an){
            if(p%2){
                z=1;
                for(i=3;i<=sqrt(p);i+=2){
                    if(p%i==0){z=0;break;}
                }
                if(z==1)cout<<"no"<<endl;
                else if(mode(an,p,p)==an)cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }
            else{
                if(mode(an,p,p)==an)cout<<"yes"<<endl;
                else cout<<"no"<<endl;
            }

    }
    return 0;
}
