#include<stdio.h>

int main(){
    int a[55],n,c,d,i,f;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        if(n==1){
            printf("Discarded cards:\nRemaining card: 1\n");
            continue;
        }
        for(i=1;i<=n;i++)a[i]=i;
        c=d=0;
        printf("Discarded cards: ");
        for(i=1;i<=n;i++){
            if(a[i]>0)c++;
            if(c%2!=0&&c%2!=-1){
                if(d<n-2)printf("%d, ",a[i]);
                else if(d==n-2){printf("%d\n",a[i]);}
                c=-1;a[i]=0;d++;
            }
            if(i==n)i=1;
            if(d==n-1)break;
        }
        printf("Remaining card: ");
        f=0;
        for(i=1;i<=n;i++){
            if(a[i]>0)printf("%d\n",a[i]);
        }
    }
    return 0;
}
