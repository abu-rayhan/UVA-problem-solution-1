#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,t,i,j,p;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>=0&&n<=9){cout<<n<<endl;continue;}
        stack<long long>st;
        for(i=9;i>=2;i--){
            while(n%i==0){
                n=n/i;
                st.push(i);
            }
        }
        if(n!=1)cout<<-1<<endl;
        else{
            p=0;
            while(st.empty()==0){
                p=p*10+st.top();
                st.pop();
            }
            cout<<p<<endl;
        }
    }
    return 0;
}
