#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count=0;
    int a,b;
    char sn,c[5];
    while(scanf("%d%c%d=%s",&a,&sn,&b,c)==4)
    {
       if(sn=='+')
       {
           if(atoi(c)==(a+b))
            count++;
       }
       else if(sn=='-')
       {
           if(atoi(c)==(a-b))
            count++;
       }
    }
    printf("%d\n",count);
return 0;
}
