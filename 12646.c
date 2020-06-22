#include<stdio.h>

int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a==b && b!=c){
            printf("C\n");
        }
        else if(a==c && c!=b){
            printf("B\n");
        }
        else if(c==b && b!=a){
            printf("A\n");
        }
        else{
            printf("*\n");
        }
    }
    return 0;
}

