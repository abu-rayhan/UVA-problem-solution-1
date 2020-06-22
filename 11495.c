#include<stdio.h>

long long a[20000000],c,ar[2000000],b[2000000];
void abu(long long l,long long m,long long h){
    long long i,j,k,x,y;
    x=m-l+1;
    y=h-m;
    for(i=0;i<x;i++)ar[i]=a[i+l];
    for(i=0;i<y;i++)b[i]=a[m+1+i];
    i=j=0;
    k=l;
    while(i<x&&j<y){
        if(ar[i]<=b[j]){
            a[k]=ar[i++];
        }
        else {a[k]=b[j++];c+=x-i;}
        k++;
    }
    while(i<x){
        a[k]=ar[i++];
        k++;
    }
    while(j<y){
        a[k]=b[j++];
        c+=x-i;
        k++;
    }
}
void rayhan(long long l,long long h){
    long long m;
    if(l<h){
        m=(l+h)/2;
        rayhan(l,m);
        rayhan(m+1,h);
        abu(l,m,h);
    }
}

int main(){
    long long n,i,l,h;
    while(1){
        scanf("%lld",&n);
        if(n==0)break;
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        l=0;h=n-1;
        c=0;
        rayhan(l,h);
        if(c%2!=0)
        printf("Marcelo\n");
        else printf("Carlos\n");
    }
    return 0;
}
