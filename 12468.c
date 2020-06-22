#include<stdio.h>

int main(){
    int a,b,t,d,e;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==-1&&b==-1)break;
        if((a==0&&b==99)||(a==99&&b==0))printf("1\n");
        else {
            if(a>b){t=b;b=a;a=t;}
            d=99-b+1+a;
            e=b-a;
            if(d<e)
            printf("%d\n",d);
            else printf("%d\n",e);
        }
    }
    return 0;
}
