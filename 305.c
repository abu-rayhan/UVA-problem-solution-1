#include<stdio.h>

int main(){
    int k,m,i,j,a[100],c,d;
    while(scanf("%d%d",&k,&m)!=0){
            for(j=1;j<-2*k;j++)a[j]=j+1;
            c=d=0;
            for(j=1;j<=2*k;j++){
                d++;
                if(d==m){
                    d=0;
                    if(a[j]>k){c++;a[j]=0;}
                    else break;
                }
                if(j==k*2)j=1;
            }
            if(c==k){printf("%d\n",m);break;}
    }
    return 0;
}
