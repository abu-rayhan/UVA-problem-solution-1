#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[1009],b[1009];
    while(gets(a)){
        gets(b);
        int a1=strlen(a);
        int b1=strlen(b);
        int l[a1+5][b1+5];
        for(int i=0;i<=a1;i++){
            for(int j=0;j<=b1;j++){
                if(i==0||j==0)l[i][j]=0;
                else if(a[i-1]==b[j-1])l[i][j]=l[i-1][j-1]+1;
                else l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
        cout<<l[a1][b1]<<endl;
    }
    return 0;
}
