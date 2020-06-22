#include<stdio.h>
#include<string.h>

int main(){
    long long b,i,r,l,d;
    char a[1000000],c;
    while(scanf("%s %c %lld",a,&c,&b)!=EOF){
        l=strlen(a);
        if(c=='%'){
            r=0;
            for(i=0;i<l;i++){
                r=(r*10+a[i]-'0')%b;
            }
            printf("%lld\n",r);
        }
        else{
            r=0;
            d=0;
            for(i=0;i<l;i++){
                r=r*10+a[i]-'0';
                if(r>=b||d>0){
                    printf("%lld",r/b);
                    r=r%b;
                    d++;
                }
                else if(r<b&&i==l-1)printf("0");
            }
            printf("\n");
        }
    }
    return 0;
}
