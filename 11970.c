#include<stdio.h>
#include<math.h>

int main(){
    double k,n,j;
    double t,i,m,a[1000];
    int h,c;
    scanf("%lf",&t);
    for(i=1;i<=t;i++){
        scanf("%lf",&n);
        c=0;
        for(j=1;j<n;j++){
            k=j/sqrt(n-j);
            m=floor(k);
            if(m==k){
                a[c]=j;
                c++;
            }
        }
        printf("Case %.lf:",i);
        for(h=0;h<c;h++)printf(" %.lf",a[h]);
        printf("\n");
    }
    return 0;
}
