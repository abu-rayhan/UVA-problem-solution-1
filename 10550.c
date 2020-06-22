#include<stdio.h>

int main(){
    int a,b,c,d,t,i;
    for(i=1;i>=1;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)break;
        t=0;
        if(a<b)t+=40-(b-a);
        else t+=a-b;
        if(b>c)t+=40-(b-c);
        else t+=c-b;
        if(c<d)t+=40-(d-c);
        else t+=c-d;
        printf("%d\n",t*9+1080);
    }
    return 0;
}
