#include<stdio.h>

int main(){
    int n,a,b[1000],i,j;
    double av,s,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        s=0;
        for(j=0;j<a;j++){
            scanf("%d",&b[j]);
            s=s+b[j];
        }
        av=s/(double)a;
        c=0;
        for(j=0;j<a;j++){
            if(b[j]>av){
                c++;
            }
        }
        printf("%.3lf%%\n",(c/a)*100.0);
    }
    return 0;
}
