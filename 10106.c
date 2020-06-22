#include<stdio.h>
#include<string.h>

int main(){
    int i,j,a1,s1,l,c,k,d;
    char s[1000],a[1000],p;
    while(scanf("%s %s",s,a)!=EOF){
        s1=strlen(s);
        a1=strlen(a);
        int r[500][1000]={0},re[1000],h,g;
        for(i=s1-1,g=0;i>=0;i--,g++){
            for(j=0;j<g;j++){
                r[i][j]=0;
            }
            l=j;
            c=0;
            for(j=a1-1;j>=0;j--){
                p=(a[j]-'0')*(s[i]-'0')+c;
                r[i][l]=p%10;
                c=p/10;
                l++;
            }
            if(c>0){r[i][l]=c;l++;}
        }
        c=h=0;
        for(j=0;j<l;j++){
            d=0;
            for(i=0;i<s1;i++){
                d+=r[i][j];
            }
            re[c]=(d+h)%10;
            h=(d+h)/10;
            c++;
        }
        if(h>0){re[c]=h;c++;}
        k=c-1;
        while(re[k]==0)k--;
        if(k>=0)
        for(i=k;i>=0;i--)printf("%d",re[i]);
        else printf("0");
        printf("\n");
    }
    return 0;
}
