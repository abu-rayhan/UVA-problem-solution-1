#include<stdio.h>
int a[5]={1,5,10,25,50},table[7495][10];
void dp(){
    int i,j,x,y;
    for(i=0;i<=7489;i++){
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
    int n;
    dp();
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",table[n][4]);
    }
    return 0;
}
