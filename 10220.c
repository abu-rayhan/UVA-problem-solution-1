#include<stdio.h>

int main(){
    int a[10000],i,j,n,c,p,s,l;
    while(scanf("%d",&n)!=EOF){
        a[0]=1;
        l=1;
        s=0;
        for(i=2;i<=n;i++){
            c=0;
            for(j=0;j<l;j++){
                p=a[j]*i+c;
                a[j]=p%10;
                c=p/10;
            }
            while(c){
                a[l]=c%10;
                c/=10;
                l++;
            }
        }
        s=0;
        for(i=l-1;i>=0;i--)s+=a[i];
        printf("%d\n",s);
    }
    return 0;
}
