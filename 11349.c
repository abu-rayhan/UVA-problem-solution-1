#include<stdio.h>

int main(){
    long long n,t,a[100][100],g=0,z,i,j,k,l;
    char c1,c2;
    scanf("%lld",&t);
    while(t--){
        getchar();
        scanf("%c %c %lld",&c1,&c2,&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)scanf("%lld",&a[i][j]);
        }
        z=0;
        for(i=0,j=n-1;i<n&&j>=n/2;i++,j--){
            for(k=0,l=n-1;k<n&&l>=0;k++,l--){
                if((a[i][k]!=a[j][l])||a[i][k]<0||a[j][l]<0){
                    z=1;
                    printf("Test #%lld: Non-symmetric.\n",++g);
                    break;
                }
            }
            if(z==1)break;
        }
        if(z==0)printf("Test #%lld: Symmetric.\n",++g);
    }
    return 0;
}
