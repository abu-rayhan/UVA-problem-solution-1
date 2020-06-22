#include<stdio.h>

int main(){
    int n,a[1000],i,c,j;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        c=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
