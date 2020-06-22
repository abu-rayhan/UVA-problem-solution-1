#include<stdio.h>

int main(){
    int n,a[9]={1,1,2,6,24,120,720,5040,40320},i,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
        for(i=8;i>=0;i--){
            while(n!=0){
                if(n-a[i]>=0){
                    n=n-a[i];
                    c++;
                }
                else break;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
