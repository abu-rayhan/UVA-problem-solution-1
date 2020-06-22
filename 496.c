#include<stdio.h>

int main(){
    int a[1000],b[1000],i,m1,m2,n;
    while(1){
        for(i=1;i<=2;i++){
                m1=0;
                m2=0;
            while(scanf("%c",&n)&&n!='\n'){
                if(i==1){a[m1]=n;m1++;}
                else {b[m2]=n;m2++;}
            }
        }
        for(i=0;i<m1;i++)printf("%d ",a[i]);
        printf("\n");
        for(i=0;i<m2;i++)printf("%d ",b[i]);
        printf("\n");
    }
}
