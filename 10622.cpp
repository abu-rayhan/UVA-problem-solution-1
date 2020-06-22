#include<bits/stdc++.h>

using namespace std;

int main(){
    long long t,n,i,j,c,z,x,r,negative;
    for(i=1;;i++){
        cin>>n;
        if(n==0)break;
        z=0;
        negative=0;
        if(n<0){n=-n;negative=1;}
        for(j=2;j*j<=n;j++){
            if(n%j!=0)continue;
            x=n;
            c=0;
            while(x%j==0){
                x=x/j;
                c++;
            }
            if(x==1){
                if(negative==0){
                    r=c;
                    z=1;
                    break;
                }
                else{
                    if(c%2){
                        r=c;
                        z=1;
                        break;
                    }
                }
            }
        }
        if(z==0)cout<<1<<endl;
        else cout<<r<<endl;
    }
    return 0;
}
