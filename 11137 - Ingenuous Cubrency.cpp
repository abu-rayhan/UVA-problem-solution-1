#include<bits/stdc++.h>

using namespace std;

long long dp[10001][25],a[22],i,j,x,y,n;
int main(){
	for(i=1;i<=21;i++)a[i]=i*i*i;
	for(i=0;i<10000;i++){
		for(j=0;j<=21;j++){
			if(i==0)dp[i][j]=1;
			else{
				x=(j>0)?dp[i][j-1]:0;
				y=(i>=a[j])?dp[i-a[j]][j]:0;
				dp[i][j]=x+y;
			}
		}
	}
	while(cin>>n){
		cout<<dp[n][21]<<endl;
	}
	return 0;
}
