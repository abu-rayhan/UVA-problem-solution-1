#include<stdio.h>

int main(){
    int m,n,c;
    while(scanf("%d %d",&m,&n)!=EOF){
        c=m*n;
        if(c<=0)printf("0\n");
        else{
            printf("%d\n",c-1);
        }
    }
    return 0;
}
