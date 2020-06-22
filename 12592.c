#include<stdio.h>
#include<string.h>
int main()
{
    char s[105][105],s1[105];
    int a,b,i,q,j;
    scanf("%d",&a);
    getchar();
    for(i=0; i<a*2; i++)
    {
        gets(s[i]);
    }
    scanf("%d",&q);
    for(i=0; i<=q; i++)
    {
        gets(s1);
        for(j=0; j<a*2; j+=2)
        {
            if(strcmp(s1,s[j])==0)
            {
                printf("%s\n",s[j+1]);
                break;
            }
        }
    }
    return 0;
}
