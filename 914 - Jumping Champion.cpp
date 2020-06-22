#include<bits/stdc++.h>

using namespace std;
int a[1000001],ar[999983];
void prime(){
    int i,j,k=2;
    for(i=2;i<=sqrt(1000001);i++){
        for(j=2*k;j<=1000001;j+=k)a[j]=1;
        k++;
        while(a[k]==1)k++;
    }
    a[1]=a[0]=1;
}
int main(){
    prime();
    int t,l,u,i,dif,x,y,r;
    cin>>t;
    while(t--){
        cin>>l>>u;
        int mx=0,c=0;
        for(i=l;i<=u;i++){
            if(a[i]==0){
                c++;
                if(c==1)x=i;
                else if(c>1){
                    y=i;
                    dif=y-x;
                    ar[dif]++;
                    if(mx<=ar[dif]){mx=ar[dif];r=dif;}
                    x=y;
                }
            }
        }
        c=x=0;
        for(i=0;i<=u-l+1;i++){
            if(ar[i]==mx){
                c++;
            }
            ar[i]=0;
        }
        if(mx==0||c>1)cout<<"No jumping champion"<<endl;
        else cout<<"The jumping champion is "<<r<<endl;
        c=ar[mx]=0;
    }
    return 0;
}
