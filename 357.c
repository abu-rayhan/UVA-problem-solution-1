#include<stdio.h>
long long int a[5]={1,5,10,25,50},table[30009][10];
int dp(){
    long long int i,j,x,y;
    for(i=0;i<=30000;i++){
        for(j=0;j<5;j++){
            if(i==0)table[i][j]=1;
            else{
                x=(j>0)?table[i][j-1]:0;
                y=(i>=a[j])?table[i-a[j]][j]:0;
                table[i][j]=x+y;
            }
        }
    }
}
int main(){
    long long int n;
    dp();
    while(scanf("%lld",&n)!=EOF){
        if(table[n][4]!=1)
            printf("There are %lld ways to produce %lld cents change.\n",table[n][4],n);
        else
            printf("There is only 1 way to produce %lld cents change.\n",n);
    }
    return 0;
}
