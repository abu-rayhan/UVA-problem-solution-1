#include<stdio.h>

int main(){
    char s[10000];
    int i;
    while(scanf(" %[^\n]",&s)!=EOF)
        printf("%s\n",s);
    return 0;
}
