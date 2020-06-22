#include<stdio.h>

int main(){
    int a[10000],t,k,m,h2,m2,i,r,h1,m1,max,j,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d:%d",&k,&h1,&m1);
        for(j=0;j<k;j++){
            scanf("%d:%d %d",&h2,&m2,&r);
            if(m2>=m1){
                m=m2-m1;
                if(h2>=h1)h=h2-h1;
                else h=24-h1+h2;
            }
            else{
                m=m2+60-m1;
                h1++;
                if(h2>=h1)h=h2-h1;
                else h=24+h2-h1;
                h1--;
            }
            a[j]=h*60+m+r;
            if(j==0){max=a[j];continue;}
            if(max>a[j])max=a[j];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
