#include<bits/stdc++.h>

using namespace std;
int dp[109][50009];
int knapsack(int m,int a[],int t){
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=t;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(j>=a[i-1]){
                dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i-1][j-a[i-1]]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[m][t];
}
int main(){
    int n,m,i,s,first,a[109];
    cin>>n;
    while(n--){
        cin>>m;
        s=0;
        for(int i=0;i<m;i++){cin>>a[i];s+=a[i];}
        first=knapsack(m,a,s/2);
        cout<<s-2*first<<endl;
    }
    return 0;
}
