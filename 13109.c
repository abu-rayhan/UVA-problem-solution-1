#include<stdio.h>

int main(){
    int t,m,w,i,a[100000],s,j,min,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&w);
        for(i=0;i<m;i++){
            scanf("%d",&a[i]);
        }
        s=0;
        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){
                if(a[i]>a[j]){min=a[j];a[j]=a[i];a[i]=min;}
            }
            s=s+a[i];
            if(s>w)break;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
