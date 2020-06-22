#include<stdio.h>
#include<math.h>

int a[32769]={0};
void prime(){
    int i,j,k=2;
    a[0]=a[1]=1;
    for(i=2;i<=sqrt(32768);i++){
        for(j=2*k;j<=32768;j+=k){
            a[j]=1;
        }
        k++;
        while(a[k]==1)k++;
    }
}
int main(){
    prime();
    int n,c,i;
    while(scanf("%d",&n)&&n){
        c=0;
        for(i=3;i<=n/2;i+=2){
            if(a[i]==0&&a[n-i]==0)c++;
        }
        if(a[n-2]==0)c++;
        printf("%d\n",c);
    }
    return 0;
}
