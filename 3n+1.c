#include<stdio.h>

int main(){
    long a,b,i,x,y,c,c1,j,k,m;
    while(scanf("%li %li",&a,&b)!=EOF){
    if(a>=b){
        x=a;
        y=b;
    }
    else{
        x=b;
        y=a;
    }
    m=1;
    for(i=y;i<=x;i++){
        j=i;
        c=0;
        c1=0;
        while(1){
            if(j==1){
                break;
            }
            else if(j%2==0){
                j=j/2;
                c++;
            }
            else{
                j=3*j+1;
                c1++;
            }
        }
        k=c1+c+1;
        if(m<=k){
            m=k;
        }
    }
    printf("%li %li %li\n",a,b,m);
    }
    return 0;
}
