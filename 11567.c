#include<stdio.h>
#include<math.h>

int main(){
    double n,k;
    int r,c,f;
    while(scanf("%lf",&n)!=EOF){
        if(n<=2){printf("%.lf\n",n);continue;}
        c=2;
        k=log10(n)/log10(2);
        r=k;
        r=r+c;
        f=n;
        if(f%2!=0)r++;
        printf("%d\n",r);
    }
    return 0;
}
