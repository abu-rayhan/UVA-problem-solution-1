#include<stdio.h>

int main(){
    int t,i,a[10],c;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--){
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        }
        c=0;
        for(i=1;i<10;i++){
            if(a[i]<a[i-1])c++;
        }
        if(c==0){
            printf("Ordered\n");
            continue;
        }
        c=0;
        for(i=1;i<10;i++){
            if(a[i]>a[i-1])c++;
        }
        if(c==0)printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
