#include<stdio.h>

int main()
{
    int n,a,b,x,y,i;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        scanf("%d %d",&a,&b);
        for(i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            if(x==a || y==b){
                printf("divisa\n");
            }
            else if(x>a && y>b){
                printf("NE\n");
            }
            else if(x<a && y>b){
                printf("NO\n");
            }
            else if(x<a && y<b){
                printf("SO\n");
            }
            else if(x>a && y<b){
                printf("SE\n");
            }
        }
    }
    return 0;
}
