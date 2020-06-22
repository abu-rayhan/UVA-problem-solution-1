#include<stdio.h>

int main(){
    int t,m,c,a[30][30],i,j,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&c);
        for(i=0;i<c;i++){
            scanf("%d",&a[i][0]);
            for(j=1;j<=a[i][0];j++)scanf("%d",&a[i][j]);
        }
        int dp[30][300]={0};
        for(i=1;i<=a[0][0];i++){
            if(m-a[0][i]>=0)dp[0][m-a[0][i]]=1;
        }
        for(i=1;i<c;i++){
            for(j=0;j<=m;j++){
                if(dp[i-1][j]==1){
                    for(k=1;k<=a[i][0];k++){
                        if(j-a[i][k]>=0)dp[i][j-a[i][k]]=1;
                    }
                }
            }
        }
        i=0;
        while(dp[c-1][i]==0)i++;
        if(m-i>0)printf("%d\n",m-i);
        else printf("no solution\n");
    }
    return 0;
}
