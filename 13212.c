#include<stdio.h>
long long abu(long long l,long long h);
long long rayhan(long long l,long long m,long long h);
long long a[1000009],l[1000009],r[1000009],c;
int main(){
    long long n,i;
    while(scanf("%lld",&n)&&n){
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        c=0;
        abu(0,n-1);
        printf("%lld\n",c);
    }
    return 0;
}
long long abu(long long l,long long h){
    long long m;
    if(h>l){
        m=(l+h)/2;
        abu(l,m);
        abu(m+1,h);
        rayhan(l,m,h);
    }
}
long long rayhan(long long le,long long m,long long h){
    long long n1,n2,i,j,k;
    n1=m-le+1;
    n2=h-m;
    for(i=0;i<n1;i++)l[i]=a[i+le];
    for(i=0;i<n2;i++)r[i]=a[m+1+i];
    i=j=0;
    k=le;
    while(i<n1&&j<n2){
        if(l[i]<=r[j]){
            a[k]=l[i];
            i++;
        }
        else{a[k]=r[j];j++;c+=n1-i;}
        k++;
    }
    while(i<n1){
        a[k]=l[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=r[j];
        j++;
        k++;
        c+=n1-i;
    }
}
