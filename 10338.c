#include<stdio.h>
#include<string.h>

unsigned long long rayhan(unsigned long long x){
    unsigned long long p=1,i;
    for(i=1;i<=x;i++)p*=i;
    return p;
}
int main(){
    unsigned long long t,i,j,y,m,u,l,z,a[100];
    char s[21];
    scanf("%llu",&t);
    for(i=1;i<=t;i++){
        scanf("%s",s);
        for(j=0;j<100;j++)a[j]=0;
        l=strlen(s);
        for(j=0;j<l;j++){
           a[s[j]]++;
        }
        y=1;
        for(j=60;j<95;j++){
            if(a[j]>1){
                y=y*rayhan(a[j]);
            }
        }
        u=rayhan(l);
        z=u/y;
        printf("Data set %llu: %llu\n",i,z);
    }
    return 0;
}
