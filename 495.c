#include<stdio.h>
    long long a[5009][2000],i,j,l,l1,c,m,k,x,le[5009],b;
int main(){
    a[0][0]=0;
    a[1][0]=1;
    l=1;
    l1=1;
    le[0]=1;
    le[1]=1;
    for(i=2;i<=5000;i++){
        c=0;
        for(j=0,m=0,k=0;j<l&&m<l1;j++,m++,k++){
            x=a[i-1][j]+a[i-2][m]+c;
            a[i][k]=x%10;
            c=x/10;
        }
        while(j<l){
            x=a[i-1][j]+c;
            a[i][k]=x%10;
            c=x/10;
            k++;
            j++;
        }
        l1=l;
        while(c){
            a[i][k]=c%10;
            k++;
            l++;
            c/=10;
        }
        le[i]=l;
    }
    while(scanf("%lld",&b)!=EOF){
        printf("The Fibonacci number for %lld is ",b);
        for(i=le[b]-1;i>=0;i--)printf("%lld",a[b][i]);
        printf("\n");
    }
    return 0;
}
