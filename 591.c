#include<stdio.h>

int main()
{
    int a,b[50],i,c,d,s,j;
    for(i=1;i>=1;i++){
        scanf("%d",&a);
        if(a==0)break;
        s=0;
        for(j=0;j<a;j++){
            scanf("%d",&b[j]);
            s+=b[j];
        }
        s=s/a;
        c=0;
        d=0;
        for(j=0;j<a;j++){
            if(s>b[j])c+=(s-b[j]);
            else if(s<b[j])d+=(b[j]-s);
        }
        if(c>=d)printf("Set #%d\nThe minimum number of moves is %d.\n\n",i,c);
        else printf("Set #%d\nThe minimum number of moves is %d.\n\n",i,d);
    }
    return 0;
}
