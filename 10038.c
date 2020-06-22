#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[3000],n,c,i;
    while(scanf("%d",&n)!=EOF){
        int b[3000]={0};
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++){
            c=abs(a[i]-a[i-1]);
            b[c]=c;
        }
        c=0;
        for(i=1;i<n;i++){
            if(b[i]==0)c++;
        }
        if(c==0)printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
