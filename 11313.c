#include<stdio.h>

int main(){
    int n,m,t,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
            c=0;
            while(1){
                n=n-m;
                n=n+1;
                c++;
                if(n==1){printf("%d\n",c);break;}
                if(n>1&&n<m){printf("cannot do this\n");break;}
            }
    }
    return 0;
}
