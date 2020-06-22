#include<stdio.h>

int main(){
    int n,m,a[100],c,d,i,j;
    while(scanf("%d %d",&n,&m)!=EOF){
        d=0;
        for(i=1;i<=n;i++){
                c=0;
            for(j=0;j<m;j++){
                scanf("%d",&a[j]);
                if(a[j]>0)c++;
            }
            if(c==m)d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
