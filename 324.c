#include<stdio.h>

int main(){
    int n,i,a[1000],c,l,j,p;
    while(scanf("%d",&n)&&n){
        l=1;
        a[0]=1;
        c=0;
        for(i=2;i<=n;i++){
            for(j=0;j<l;j++){
                p=a[j]*i+c;
                a[j]=p%10;
                c=p/10;
            }
            while(c){
                a[l]=c%10;
                l++;
                c/=10;
            }
        }
        int b[10]={0};
        for(i=0;i<l;i++){
            b[a[i]]++;
        }
        printf("%d! --\n",n);
        printf("(0) %d (1) %d (2) %d (3) %d (4) %d\n",b[0],b[1],b[2],b[3],b[4]);
        printf("(5) %d (6) %d (7) %d (8) %d (9) %d\n",b[5],b[6],b[7],b[8],b[9]);
    }
    return 0;
}
