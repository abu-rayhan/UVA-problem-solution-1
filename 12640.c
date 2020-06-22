#include<stdio.h>

int main(){
    long long a,s,max;
    char c;
    s=max=0;
    while(scanf("%lld%c",&a,&c)!=EOF){
        s+=a;
        if(s<=0)s=0;
        if(s>max)max=s;
        if(c=='\n'){printf("%lld\n",max);s=max=0;}
    }
    return 0;
}
