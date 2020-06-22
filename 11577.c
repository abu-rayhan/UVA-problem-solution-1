#include<stdio.h>
#include<string.h>

int main(){
    int a[26],t,i,l,m;
    char s[200];
    scanf("%d",&t);
    while(t--){
        for(i=0;i<26;i++)a[i]=0;
        scanf(" %[^\n]",&s);
        l=strlen(s);
        for(i=0;i<l;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                if(s[i]>='a'&&s[i]<='z'){
                    a[s[i]-'a']++;
                }
                else a[s[i]-'A']++;
            }
        }
        m=a[0];
        for(i=1;i<26;i++){
            if(m<a[i])m=a[i];
        }
        for(i=0;i<26;i++){
            if(a[i]==m){
                printf("%c",'a'+i);
            }
        }
        printf("\n");
    }
    return 0;
}
