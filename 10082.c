#include<stdio.h>
char abu(char c);
int main(){
    int i;
    char s[10000];
    while(gets(s)){
        for(i=0;s[i]!='\0';i++){
            printf("%c",abu(s[i]));
        }
        printf("\n");
    }
    return 0;
}
char abu(char c){
    int i;
    char a[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    for(i=0;a[i]!='\0';i++){
        if(c==a[i])return a[i-1];
    }
    return ' ';
}
