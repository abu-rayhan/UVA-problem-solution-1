#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,t,n,m,ans,j,p;
    for(i=1;;i++){
        cin>>n>>m;
        if(!n&&!m)break;
        if(n==1||m==1)cout<<n*m<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;
        else if(n==2||m==2){
            if(n==2&&m==2)cout<<4<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;
            else{
            if(n==2){
                p=m;
            }
            else p=n;
            ans=0;
            for(j=1;j<=p;j++){
                if(j%4==1||j%4==2)ans+=2;
            }
            cout<<ans<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;
            }
        }
        else
        cout<<ceil(n*m*1.0/2)<<" knights may be placed on a "<<n<<" row "<<m<<" column board."<<endl;
    }
    return 0;
}

