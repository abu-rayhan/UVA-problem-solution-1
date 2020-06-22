#include<stdio.h>

int rayhan(int x){
    int s=0,d;
    while(1){
        d=x%10;
        s+=d;
        x=x/10;
        if(x==0){
            if(s<10)break;
            x=s;
            s=0;
        }
    }
    return s;
}
int main(){
    int v1,v2,c1,c2,j;
    char s[30],s1[30];
    double t1,t2;
    while(scanf(" %[^\n] %[^\n]",s,s1)!=EOF){
        getchar();
        c1=0;
        c2=0;
        for(j=0;j<strlen(s);j++){
            if(s[j]>='a'&&s[j]<='z')c1=c1+(s[j]-96);
            else if(s[j]>='A'&&s[j]<='Z')c1=c1+(s[j]-64);
        }
        for(j=0;j<strlen(s1);j++){
            if(s1[j]>='a'&&s1[j]<='z')c2=c2+(s1[j]-96);
            else if(s1[j]>='A'&&s1[j]<='Z')c2=c2+(s1[j]-64);
        }
        v1=rayhan(c1);
        v2=rayhan(c2);
        t1=((double)v2/v1)*100.0;
        t2=((double)v1/v2)*100.0;
        if(v1>=v2)printf("%.2lf %%\n",t1);
        else printf("%.2lf %%\n",t2);
    }
    return 0;
}
