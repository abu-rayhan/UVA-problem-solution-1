#include<stdio.h>
#include<string.h>

int main(){
    char s[201];
    int sum[201]={0},i,j,l;
    while(gets(s)){
       if(strcmp(s, "0")==0) break;
       l=strlen(s);
       for(i=0,j=l-1;i<l;i++,j--)sum[i]+=s[j]-'0';
    }
    for(i=0;i<200;i++)
        if(sum[i]>=10){
            sum[i+1] += sum[i]/10;
            sum[i] %= 10;
        }
    i=200;
    while(sum[i]==0&&i>=0)i--;
    if(i==-1)printf("0");
    for(;i>=0;i--)printf("%d",sum[i]);
    printf("\n");
    return 0;
}
