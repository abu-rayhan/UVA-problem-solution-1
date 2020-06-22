#include<stdio.h>
#include<math.h>
long long ar[10000000],m;
void rayhan(long long a);
long long abu(long long y);
int main(){
    long long a,max,y,x,z,i;
    while(scanf("%lld",&a)&&a){
        if(a<0)a=-a;
        rayhan(a);
        max=0;y=0;
        for(i=0;i<m;i++){
            z=ar[i];
            if(abu(z)==0){
                x=z;
                y++;
                if(max<x)max=x;
            }
        }
        if(abu(a)==0){y++;max=a;}
        if(y>1)
            printf("%lld\n",max);
        else printf("-1\n");
    }
        return 0;
}
long long abu(long long y){
    long long c=0,i;
    if(y%2==0){
        for(i=2;i<=sqrt(y);i++){
            if(y%i==0){c=1;break;}
        }
        return c;
    }
    else{
        for(i=3;i<=sqrt(y);i+=2){
            if(y%i==0){c=1;break;}
        }
        return c;
    }
}

void rayhan(long long a){
    long long i;
    m=0;
    if(a%2==0){
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                ar[m]=i;
                m++;
                if(i*i!=a){
                    ar[m]=a/i;
                    m++;
                }
            }
        }
    }
    else{
        for(i=3;i<=sqrt(a);i+=2){
            if(a%i==0){
                ar[m]=i;
                m++;
                if(i*i!=a){
                    ar[m]=a/i;
                    m++;
                }
            }
        }
    }
}
