#include<stdio.h>

int main(){
    long long t,a,x[100000],c,r,k,i,p,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&a);
        p=a;
        c=0;
        while(a!=0){
            d=a%2;
            if(d==1)c++;
            a=a/2;
        }
        k=0;
        while(p!=0){
            d=p%10;
            x[k]=d;
            p=p/10;
            k++;
        }
        r=0;
        for(i=0;i<k;i++){
            switch(x[i]){
                case 1:r++;break;
                case 2:r++;break;
                case 3:r+=2;break;
                case 4:r++;break;
                case 5:r+=2;break;
                case 6:r+=2;break;
                case 7:r+=3;break;
                case 8:r++;break;
                case 9:r+=2;break;
            }
        }
        printf("%lld %lld\n",c,r);
    }
    return 0;
}
