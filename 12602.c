#include<stdio.h>
#include<math.h>

int main(){
    int n,d,t,m;
    char a,b,c;
    scanf("%d",&t);
    while(t--){
        getchar();
        scanf("%c%c%c-%d",&a,&b,&c,&n);
        m=(a-65)*26*26+(b-65)*26+c-65;
        if(abs(n-m)>100)printf("not nice\n");
        else printf("nice\n");
    }
    return 0;
}
