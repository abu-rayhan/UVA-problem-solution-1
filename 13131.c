#include<stdio.h>
#include<math.h>

int main(){
    int t,n,k,i,s,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        if(k==1){
            printf("0\n");
            continue;
        }
        x=sqrt(n);
        s=0;
        for(i=1;i<=x;i++){
            if(n%i==0&&i%k!=0)s+=i;
            if(i!=(n/i)&&n%i==0&&(n/i)%k!=0)s+=(n/i);
        }
        printf("%d\n",s);
    }
    return 0;
}
