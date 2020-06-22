#include<stdio.h>

int main()
{
    int a,b,i,j,c;
    for(i=1;i>=1;i++){
        scanf("%d %d",&a,&b);
        if(a==0 && b==0){
            break;
        }
        if(a<=b){
            printf("Case %d: 0\n",i);
            continue;
        }
        for(j=1;j<=26;j++){
            c=(j*b)+b;
            if(c>=a){
                printf("Case %d: %d\n",i,j);
                break;
            }
        }
        if(c<a){
            printf("Case %d: impossible\n",i);
        }
    }
    return 0;
}
