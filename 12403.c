#include<stdio.h>
#include<string.h>

int main(){
    char s1[7],s2[7];
    long long t,a,b,s=0,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%s",s1);
        if(strcmp(s1,"donate")==0){
            scanf("%lld",&a);
            s+=a;
        }
        else{
            printf("%lld\n",s);
        }
    }
    return 0;
}
