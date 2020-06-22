#include<stdio.h>

int main(){
    char s[100000];
    int i;
    while(gets(s)){
        for(i=0;s[i]!='\0';i++){
            printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
