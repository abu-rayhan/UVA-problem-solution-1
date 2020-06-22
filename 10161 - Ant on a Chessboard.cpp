#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,t,r,c,s,s1;
    while(cin>>s){
            if(s==0)break;
        double t1,g;
        t1=sqrt(1-(1-4*(s-1)))+1;
        t1=t1/2;
        t=t1;
        g=t+0.5;
        if(t1>=g){
            t++;
        }
        s1=(t*t)-t+1;
        if(t%2==0){
            if(s1<s){
                c=t;
                r=t-(s-s1);
            }
            else {r=t;c=t-(s1-s);}
        }
        else{
            if(s<s1){
                r=t-(s1-s);
                c=t;
            }
            else {
                r=t;
                c=t-(s-s1);
            }
        }
        cout<<c<<" "<<r<<endl;
    }
    return 0;
}
