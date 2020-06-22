#include<stdio.h>
char abu(char c);
int main(){
    int i;
    char s[1000000];
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
        printf("%c",abu(s[i]));
    }
    printf("\n");
    return 0;
}
char abu(char c){
    char a[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    int i;
    for(i=0;a[i]!='\0';i++){
        if(c==a[i])return a[i-2];
    }
    return ' ';
}
