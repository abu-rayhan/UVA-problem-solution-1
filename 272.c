#include<stdio.h>
#include<string.h>

int main(){
    char s[1000000];
    long long i,c=0;
    while(gets(s)){
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='"'){
                c++;
                if(c%2==1)printf("``");
                else{printf("''");}
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
