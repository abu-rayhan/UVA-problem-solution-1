#include<stdio.h>
#include<string.h>

int main(){
    int i,n,j,t=0,c,l,f;
    char s[35];
    while(scanf("%d",&n)!=EOF){
        t++;
        c=0;
        while(n--){
           scanf("%s",s);
           l=strlen(s);
            int a[130]={0},b[35]={0},d;
           for(i=0;s[i]!='\0';i++){
                a[s[i]]++;
           }
           for(i=97;i<=122;i++){
            b[a[i]]++;
           }
           d=f=0;
           if(l==1)d=1;
           for(i=1;i<=30;i++){
            if(b[i]>0)f++;
            if(b[i]>1)d=1;
           }
           if(f==1)d=1;
           if(d==0)c++;
        }
        printf("Case %d: %d\n",t,c);
    }
    return 0;
}
