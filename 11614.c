#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,n;
    scanf("%lf",&a);
    while(a--){
        scanf("%lf",&b);
        n=(sqrt(8*b+1)-1)/2;
        printf("%.lf\n",floor(n));
    }
    return 0;
}
