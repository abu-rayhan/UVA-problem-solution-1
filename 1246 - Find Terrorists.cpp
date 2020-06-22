#include<bits/stdc++.h>

using namespace std;
int a[10009];
void prime(){
    int i,j;
    for(i=2;i<=100;i++){
        if(a[i]==0){
            for(j=2*i;j<=10000;j+=i)a[j]=1;
        }
    }
    a[0]=a[1]=1;
}
int main(){
    prime();
    int t,l,h,i,j,z,c,r[10009];
    cin>>t;
    while(t--){
        cin>>l>>h;
        z=0;
        for(i=l;i<=h;i++){
            c=1;
            for(j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    if(j*j==i)c++;
                    else c+=2;
                }
            }
            if(i>1)c++;
            if(a[c]==0){r[z]=i;z++;}
        }
        if(z==0)cout<<-1<<endl;
        else{
            for(i=0;i<z-1;i++){
                cout<<r[i]<<" ";
            }
            cout<<r[z-1]<<endl;
        }
    }
    return 0;
}
