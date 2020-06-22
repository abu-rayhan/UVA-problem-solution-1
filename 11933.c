#include<stdio.h>

int main(){
    int n,a,b,o,c,p,z;
    while(scanf("%d",&n)&&n){
            p=n;
            c=o=a=z=0;
        while(n!=0){
            if(n%2==1){
                c++;
                if(c%2==1){
                    a+=pow(2,z);
                }
            }
            n=n/2;
            z++;
        }
        printf("%d %d\n",a,p-a);
    }
    return 0;
}
