#include<bits/stdc++.h>

using namespace std;

int main(){
    char s[1009];
    int t,l;
    cin>>t;
    getchar();
    while(t--){
        gets(s);
        l=strlen(s);
        if(l==0){cout<<"Yes"<<endl;continue;}
        stack<char>st;
        int i,r=1,z=0;
        char c;
        int start=0;
        while(1){
            for(i=start;i<l;i++){
                if(s[i]!=' '){
                if(s[i]==')'||s[i]==']'){z=i;break;}
                st.push(s[i]);
                }
            }
            if(z==0||st.empty()||i==l)break;
            for(i=z;i<l;i++){
                if(s[i]!=' '){
                if(s[i]=='('||s[i]=='['){start=i;break;}
                if(st.empty()){i=l;r=0;break;}
                c=st.top();
                if((s[i]==')'&&c=='(')||(s[i]==']'&&c=='['))st.pop();
                else{r=0;break;}
                }
            }
            if(!r)break;
            if(i==l)break;
        }
        if(r&&z&&st.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
