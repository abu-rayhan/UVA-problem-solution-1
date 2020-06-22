#include<stdio.h>

int main(){
    int a,b,c,d,l,f,s,i,j;
    for(i=1;i>=1;i++){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
        if(a==0&&b==0&&c==0&&d==0&&l==0)break;
        s=0;
        for(j=0;j<=l;j++){
            f=a*j*j+b*j+c;
            if(f%d==0)s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
