#include<stdio.h>

int main(){
    int a[5],t,i;
    scanf("%d",&t);
    while(t--){
        for(i=0;i<5;i++)scanf("%d",&a[i]);
        if(a[0]==1&&a[1]==2&&a[2]==3&&a[3]==4&&a[4]==5)printf("Y\n");
        else if(a[0]==2&&a[1]==3&&a[2]==4&&a[3]==5&&a[4]==6)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
