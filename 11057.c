#include<stdio.h>
#include<math.h>

int main(){
    int n,a[100000],m,i,j,x,y,v,t;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){x=a[j];a[j]=a[i];a[i]=x;}
            }
        }
        v=m;
        for(i=0;i<n;i++){
            if(abu(a,0,n-1,m-a[i])==1){
                if(abs(m-a[i]-a[i])<v){
                    v=abs(m-a[i]-a[i]);
                    x=a[i];
                    y=m-a[i];
                }
            }
        }
        if(x>y){t=y;y=x;x=t;}
        printf("Peter should buy books whose prices are %d and %d.\n",x,y);
        printf("\n");
    }
    return 0;
}
int abu(int a[],int x,int y,int z){
    while(y>=x){
        int m=(x+y)/2;
        if(a[m]==z)return 1;
        else if(a[m]>z)y=m-1;
        else x=m+1;
    }
    return 0;
}
