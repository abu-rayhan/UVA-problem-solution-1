#include<stdio.h>
#include<string.h>

int main(){
    char s[109],s1[109],r[109];
    int l1=0,l,c,i;
    while(scanf("%s",s)){
        if(strcmp(s,"E-N-D")==0)break;
        l=strlen(s);
        c=0;
        for(i=0;i<l;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='-'){
                s1[c]=s[i];
                c++;
            }
        }
        s1[c]='\0';
        if(c>l1){
            l1=c;
            strcpy(r,s1);
        }
    }
    for(i=0;r[i]!='\0';i++){
        if(r[i]>='A'&&r[i]<='Z')printf("%c",r[i]+32);
        else printf("%c",r[i]);
    }
    printf("\n",r);
    return 0;
}
