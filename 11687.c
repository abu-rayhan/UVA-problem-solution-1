#include<stdio.h>
#include<string.h>

int main(){
    char s[1000000];
    long long a[1000],i,l,r,c,t;
    while(scanf("%s",s)){
        if(strcmp(s,"END")==0)break;
        l=strlen(s);
        if(s[0]=='1'&&l==1){printf("1\n");continue;}
        a[1]=l;
        r=2;
        while(1){
            c=0;
            while(l!=0){
                t=l%10;
                l=l/10;
                c++;
            }
            a[r]=c;
            l=c;
            if(a[r]==a[r-1])break;
            r++;
        }
        printf("%d\n",r);
    }
    return 0;
}
