#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n,f,p=0,r,m,l,k,t,h,x;
    char v[101];
    while(1){
        p++;
        scanf("%d %d",&n,&f);
        if(n==0&&f==0)break;
        int a[101]={0},b[101]={10};
        for(i=1;i<=n;i++){
            scanf("%s",v);
            l=strlen(v);
            for(j=0,k=l-1;j<l;j++,k--)a[j]+=v[k]-'0';
        }
        for(j=0;j<101;j++){
            if(a[j]>9){
                a[j+1]+=(a[j]/10);
                a[j]%=10;
            }
        }
        j=100;
        while(a[j]==0&&j>=0)j--;
        printf("Bill #%d costs ",p);
        if(j>=0){
            m=0;
            for(k=j;k>=0;k--){
               b[m]=a[k];
                printf("%d",a[k]);
                m++;
            }
        }
        printf(": each friend should pay ");
        r=t=h=0;
        for(j=0;j<m;j++){
            r=r*10+b[j];
            if(t==1){
                printf("%d",r/f);
                r%=f;
            }
            else {
                if(r/f>0){
                    printf("%d",r/f);
                    r=r%f;
                    t=1;
                }
            }
        }
        if(t==0)printf("0");
        printf("\n\n");
    }
    return 0;
}
