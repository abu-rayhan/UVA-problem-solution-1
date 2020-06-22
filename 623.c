#include<stdio.h>
#define max 5000
int ar[max];

int main(){
    int n,i;
    while(scanf("%d",&n)!=0){
        int l=1,j;
        ar[0]=1;
        for(j=2;j<=n;j++){
            int c=0,prod;
            for(i=0;i<l;i++){
                prod=ar[i]*j+c;
                ar[i]=prod%10;
                c=prod/10;
            }
            while(c){
                ar[l]=c%10;
                c=c/10;
                l++;
            }
        }
        printf("%d!\n",n);
        for(i=l-1;i>=0;i--)printf("%d",ar[i]);
        printf("\n");
    }
    return 0;
}
