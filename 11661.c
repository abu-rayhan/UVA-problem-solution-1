#include<stdio.h>
#include<math.h>

int main(){
    char s[2000009];
    long long n,i,a1,b1,max,x,a,b;
    while(scanf("%lld",&n)&&n){
        scanf("%s",s);
        a1=b1=0;
        max=n;
        for(i=0;i<n;i++){
            if(s[i]=='R'){a=i;a1=1;}
            if(s[i]=='D'){b=i;b1=1;}
            else if(s[i]=='Z'){max=0;break;}
            if(a1==1&&b1==1){
                x=abs(a-b);
                if(x<max){max=x;}
            }
        }
        printf("%lld\n",max);
    }

    return 0;
}
