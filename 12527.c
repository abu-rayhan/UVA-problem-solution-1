#include<stdio.h>

int main(){
    int n,m,i,j,d,k,t;
    while(scanf("%d %d",&n,&m)!=EOF){
        d=0;
        for(i=n;i<=m;i++){
            int a[10]={0},c=0,f;
            k=i;
            while(k!=0){
                t=k%10;
                a[t]++;
                c++;
                k=k/10;
            }
            f=0;
            for(j=0;j<10;j++){
                if(a[j]>0)f++;
            }
            if(f==c)d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
