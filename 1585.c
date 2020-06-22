#include<stdio.h>
#include<string.h>

int main()
{
    char s[81];
    int i,l,a,p,t,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%s",s);
        l=strlen(s);
        p=0;
        t=1;
        for(j=0;j<l;j++){
            if(s[j]=='O'){
                p=p+t;
                t++;
            }
            else t=1;
        }
        printf("%d\n",p);
    }
    return 0;
}
