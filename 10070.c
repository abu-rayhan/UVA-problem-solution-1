#include<stdio.h>
#include<string.h>

int main(){
    long long n,l,d4,d1,d40,d15,d5,c,r,i,d,z=0;
    char s[100000];
    while(scanf("%s",s)!=EOF){
        if(z==1)printf("\n");
        l=strlen(s);
        r=0;
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            r=r%4;
        }
        d4=r;
        r=0;
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            r=r%100;
        }
        d1=r;
        r=0;
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            r=r%400;
        }
        d40=r;
        r=0;
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            r=r%15;
        }
        d15=r;
        r=0;
        for(i=0;i<l;i++){
            r=r*10+s[i]-'0';
            r=r%55;
        }
        d5=r;
        c=1;
        d=0;
        if((d4==0&&d1!=0)||d40==0){
            printf("This is leap year.\n");
            z=1;
            c=0;
            if(d5==0){c=0;d=1;}
        }
        if(d15==0){printf("This is huluculu festival year.\n");c=0;z=1;}
        if(d==1){printf("This is bulukulu festival year.\n");z=1;}
        if(c==1){printf("This is an ordinary year.\n");z=1;}
    }
    return 0;
}
