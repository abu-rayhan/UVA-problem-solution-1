#include<stdio.h>

int main(){
    int t,y[6],j,k,a,i,m,r,g,min,l,n;
    char s[1000];
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);
        l=strlen(s);
        a=0;m=0;r=0;g=0;i=0;t=0;
        for(j=0;j<l;j++){
            if(s[j]=='M')m++;
            else if(s[j]=='A')a++;
            else if(s[j]=='R')r++;
            else if(s[j]=='G')g++;
            else if(s[j]=='I')i++;
            else if(s[j]=='T')t++;
        }
        y[0]=a/3;
        y[1]=m/1;
        y[2]=r/2;
        y[3]=g/1;
        y[4]=i/1;
        y[5]=t/1;
        min=y[0];
        for(k=1;k<6;k++){
            if(min>y[k])min=y[k];
        }
        printf("%d\n",min);
    }
    return 0;
}
