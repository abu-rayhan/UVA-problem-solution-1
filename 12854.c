#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,a[5],b[5],i,c;
    while(scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&b[0],&b[1],&b[2],&b[3],&b[4])!=EOF){
        c=0;
        for(i=0;i<5;i++){
            if(abs(a[i]-b[i])!=1)c++;
            if(c>0)break;
        }
        if(c==0)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
