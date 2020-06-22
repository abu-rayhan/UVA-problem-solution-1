#include<stdio.h>

int main(){
    int n,l,t,a[10],o[10],i,j,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&n,&l);
        s=0;
        for(j=0;j<n;j++){
            scanf("%d",&o[j]);
            s+=o[j];
        }
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        if(s>l){
            printf("Case %d: No\n",i);
            continue;
        }
        s=0;
        for(j=0;j<n;j++){
            if(a[j]<o[j])s++;
        }
        if(s>0)printf("Case %d: No\n",i);
        else if(s==0)printf("Case %d: Yes\n",i);
    }
    return 0;
}
