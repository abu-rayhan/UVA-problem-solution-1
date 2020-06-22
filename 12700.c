#include<stdio.h>

int main(){
    unsigned d,n,i,l,w,b,a,t,z=0;
    char s[20];
    scanf("%u",&d);
    while(d--){
        scanf("%u %s",&n,s);
        w=0;b=0;a=0;t=0;
        l=strlen(s);
        z++;
        for(i=0;i<l;i++){
            if(s[i]=='B')b++;
            else if(s[i]=='W')w++;
            else if(s[i]=='A')a++;
            else if(s[i]=='T')t++;
        }
        if(a==n)printf("Case %u: ABANDONED\n",z);
        else if(b+a==n)printf("Case %u: BANGLAWASH\n",z);
        else if(w+a==n)printf("Case %u: WHITEWASH\n",z);
        else if(b>w)printf("Case %u: BANGLADESH %u - %u\n",z,b,w);
        else if(w>b)printf("Case %u: WWW %u - %u\n",z,w,b);
        else printf("Case %u: DRAW %u %u\n",z,w,w);
    }
    return 0;
}
