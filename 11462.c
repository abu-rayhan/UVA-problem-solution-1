#include<stdio.h>
void abu(long long l,long long m,long long h);
void rayhan(long long l,long h);
long long a[2000009],le[2000009],r[2000009];
int main(){
    long long n,i;
    while(scanf("%lld",&n)&&n){
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        rayhan(0,n-1);
        for(i=0;i<n-1;i++)printf("%lld ",a[i]);
        printf("%lld\n",a[n-1]);
    }
    return 0;
}
void rayhan(long long l,long h){
    if(l<h){
       long long m=(l+h)/2;
        rayhan(l,m);
        rayhan(m+1,h);

        abu(l,m,h);
    }
}
void abu(long long l,long long m,long long h){
    long long x,y,i,j,k;
    x=m-l+1;
    y=h-m;
    for(i=0;i<x;i++)le[i]=a[l+i];
    for(i=0;i<y;i++)r[i]=a[m+1+i];
    i=j=0;
    k=l;
    while(i<x&&j<y){
        if(le[i]<=r[j]){a[k]=le[i];i++;}
        else{a[k]=r[j];j++;}
        k++;
    }
    while(i<x){
        a[k]=le[i];i++;k++;
    }
    while(j<y){
        a[k]=r[j];j++;k++;
    }
}
