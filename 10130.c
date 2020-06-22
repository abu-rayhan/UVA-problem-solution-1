#include<stdio.h>
int k[1001][1001];
int max(int a,int b){
    if(a>b)return a;
    else return b;
}
void rayhan(int n,int m,int w[],int p[]){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0||j==0)k[i][j]=0;
            else if(j>=w[i-1]){
                k[i][j]=max(p[i-1]+k[i-1][j-w[i-1]],k[i-1][j]);
            }
            else k[i][j]=k[i-1][j];
        }
    }
    return k[n][m];
}
int main(){
    int t,n,i,w[1001],p[1001],q[101],max,m,g;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&p[i],&w[i]);
        }
        scanf("%d",&g);
        m=0;
        for(i=0;i<g;i++){
            scanf("%d",&q[i]);
            if(q[i]>m)m=q[i];
        }
        rayhan(n,m,w,p);
        max=0;
        for(i=0;i<g;i++){
            max+=k[n][q[i]];
        }
        printf("%d\n",max);
    }
    return 0;
}
