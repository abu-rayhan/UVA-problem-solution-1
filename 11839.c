#include<stdio.h>

int main(){
    int n,a,i,b,w,p;
    while(scanf("%d",&n)&&n){
        while(n--){
            b=w=0;
            for(i=0;i<5;i++){
                scanf("%d",&a);
                if(a<=127){b++;p=i;}
                else w++;
            }
            if(b==1)printf("%c\n",65+p);
            else printf("*\n");
        }
    }
    return 0;
}
