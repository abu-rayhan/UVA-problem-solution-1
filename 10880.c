#include<stdio.h>
#include<math.h>

int main(){
    long long t,c,r,x,m,a,ar[100000],j,i,f;
    scanf("%lld",&t);
    for(f=1;f<=t;f++){
        scanf("%lld %lld",&c,&r);
        a=c-r;
        if(a%2==0){
                ar[0]=1;
                m=1;
            for(i=2;i<=sqrt(a);i++){
                if(a%i==0){ar[m]=i;
                m++;
                if(i*i!=a){ar[m]=a/i;
                m++;}
                }
            }
            ar[m]=a;m++;
        }
        else{
                ar[0]=1;
                m=1;
            for(i=3;i<=sqrt(a);i+=2){
               if(a%i==0){ar[m]=i;
                m++;
                if(i*i!=a){ar[m]=a/i;
                m++;}
                }
            }
            if(a!=1){
            ar[m]=a;m++;}
        }
        printf("Case #%lld:",f);
        if(c<=r){printf(" 0\n");continue;}
        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){
                if(ar[i]>ar[j]){
                    x=ar[j];
                    ar[j]=ar[i];
                    ar[i]=x;
                }
            }
            if(ar[i]>r){
                if(i<m-1){printf(" %lld",ar[i]);}
            }
        }
        if(ar[m-1]>r)
        printf(" %lld",ar[m-1]);
        printf("\n");
    }
    return 0;
}
