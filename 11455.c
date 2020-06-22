#include<stdio.h>

int main(){
    int n,i,j,a[4],m,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[0]);
        m=a[0];
        for(j=1;j<4;j++){
            scanf("%d",&a[j]);
            if(m<=a[j])m=a[j];
        }
        s=0;
        for(j=0;j<4;j++){
            s+=a[j];
        }
        s=s-m;
        if(m>=s)printf("banana\n");
        else{
            if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])printf("square\n");
            else if((a[0]==a[2]&&a[1]==a[3])||(a[0]==a[3]&&a[1]==a[2])||(a[0]==a[1]&&a[2]==a[3]))
                printf("rectangle\n");
            else printf("quadrangle\n");
        }
    }
    return 0;
}
