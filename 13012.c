#include<stdio.h>

int main(){
    int t,a[5],c,i;
    while(scanf("%d",&t)!=EOF){
            c=0;
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
            if(a[i]==t)c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
