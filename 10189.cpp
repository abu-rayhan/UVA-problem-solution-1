#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c,i,j,z=0,k=0;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0)break;
        if(k==1)cout<<endl;
        char a[101][101];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)cin>>a[i][j];
        }
        cout<<"Field #"<<++z<<":"<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]!='*'){
                    c=0;
                    if(i>0&&i<n-1){
                        if(a[i+1][j]=='*')c++;
                        if(a[i-1][j]=='*')c++;
                        if(j>=1&&a[i][j-1]=='*')c++;
                        if(j<m-1&&a[i][j+1]=='*')c++;
                        if(j>=1&&a[i-1][j-1]=='*')c++;
                        if(j<m-1&&a[i-1][j+1]=='*')c++;
                        if(j>0&&a[i+1][j-1]=='*')c++;
                        if(j<m-1&&a[i+1][j+1]=='*')c++;
                    }
                    else{
                        if(i==0){
                            if(j>0&&a[i][j-1]=='*')c++;
                            if(j<m-1&&a[i][j+1]=='*')c++;
                            if(i+1<n&&j>0&&a[i+1][j-1]=='*')c++;
                            if(i+1<n&&j<m-1&&a[i+1][j+1]=='*')c++;
                            if(i+1<n&&a[i+1][j]=='*')c++;
                        }
                        else{
                            if(j>0&&a[i][j-1]=='*')c++;
                            if(j<m-1&&a[i][j+1]=='*')c++;
                            if(i-1>=0&&j>0&&a[i-1][j-1]=='*')c++;
                            if(i-1>=0&&j<m-1&&a[i-1][j+1]=='*')c++;
                            if(i-1>=0&&a[i-1][j]=='*')c++;
                        }
                    }
                    cout<<c;
                }
                else cout<<"*";
            }
            cout<<endl;
        }
        k=1;
    }
    return 0;
}
