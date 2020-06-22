#include<stdio.h>
gcd(int i,int j);
int main(){
    int n,i,j,g;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0)break;
        g=0;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                g+=gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
}
gcd(int i,int j){
    int k,g;
    for(k=i;k>=1;k--){
        if(i%k==0 && j%k==0){
            g=k;
            break;
        }
    }
    return g;
}
