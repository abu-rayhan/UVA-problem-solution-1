#include<bits/stdc++.h>

using namespace std;
int knapsack(int a[],int n,int t){
    int dp[25][209],i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=t;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(j>=a[i-1]){
                dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i-1][j-a[i-1]]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][t];
}
int main(){
    int m,i,a[50],first,s,n,x;
    char c;
    cin>>m;
    while(m--){
        n=s=0;
        while(scanf("%d%c",&x,&c)){
            a[n]=x;
            n++;
            s+=x;
            if(c=='\n')break;
        }
        if(s%2==1)cout<<"NO\n";
        else{
            first=knapsack(a,n,s/2);
            if(first==s/2)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
