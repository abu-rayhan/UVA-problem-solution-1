#include<stdio.h>
#include<string.h>

int main(){
    int i,j,c,l;
    char s[1000],t[1000],d[1000];
    while(1){
        gets(s);
        if(strcmp(s,"DONE")==0)break;
        l=0;
        for(i=0;s[i]!='\0';i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                t[l]=s[i];
                l++;
            }
        }
        for(i=l-1,j=0;i>=0;i--,j++){
            d[j]=t[i];
        }
        c=0;
        for(i=0;i<l;i++){
            if(t[i]>='A'&&t[i]<='Z')t[i]=t[i]+32;
            if(d[i]>='A'&&d[i]<='Z')d[i]=d[i]+32;
            if(t[i]!=d[i])c++;
        }
        if(c==0) printf("You won\'t be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
