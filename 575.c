#include<stdio.h>
#include<math.h>

int main(){
    long long s,i,l,j,p,m;
    char a[1000];
    while(scanf("%s",a)){
        l=strlen(a);
        s=0;
        for(i=0;i<l;i++){
            p=pow(2,l-i);
            s+=((p-1)*(a[i]-'0'));
        }
        if(s==0)break;
        printf("%lld\n",s);
    }
    return 0;
}
