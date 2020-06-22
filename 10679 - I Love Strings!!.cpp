#include<bits/stdc++.h>

using namespace std;
int ar[1009];
void make(string b){
    int b1=b.size();
    int i=1,j=0;
    while(i<b1){
        if(b[i]==b[j]){
            j++;
            ar[i]=j;
            i++;
        }
        else{
            if(j){
                j=ar[j-1];
            }
            else{
                ar[i]=0;
                i++;
            }
        }
    }
}
int check(string a,string b){
    int i=0,j=0;
    while(i<a.size()){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        if(j==b.size())return 1;
        if(a[i]!=b[j]){
            if(j){
                j=ar[j-1];
            }
            else i++;
        }
    }
    return 0;
}
int main(){
    string a,b;
    int t,q;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>q;
        while(q--){
            cin>>b;
            make(b);
            if(check(a,b))cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }
    return 0;
}
