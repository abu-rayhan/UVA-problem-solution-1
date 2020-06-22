#include<stdio.h>

int main(){
    int i,s,n,a[100009],c,m,j;
    while(scanf("%d",&n)&&n){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        m=s=0;
        for(i=0;i<n;i++)
        {
            s+=a[i];
            if(s>m)m=s;
            if(s<0)s=0;
        }
        if(m>0)printf("The maximum winning streak is %d.\n",m);
        else printf("Losing streak.\n");
    }
    return 0;
}
