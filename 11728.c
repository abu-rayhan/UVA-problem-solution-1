#include<stdio.h>
int a[100000];
void rayhan(){
    int i,j,s;
    for(i=1;i<=1500;i++){
        s=0;
        for(j=1;j<=i;j++){
            if(i%j==0)s+=j;
        }
        a[i-1]=s;
    }
}
int main(){
    rayhan();
    int n,i,k=0,c;
    while(scanf("%d",&n)){
        if(n==0)break;
        k++;
        c=0;
        for(i=1499;i>=0;i--){
            if(a[i]==n){
                printf("Case %d: %d\n",k,i+1);
                c++;
                break;
            }
        }
        if(c==0)printf("Case %d: %d\n",k,-1);
    }
    return 0;
}
