#include<stdio.h>
#include<math.h>

int main(){
    int t,n,a[20],i,j;
    int s,s1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        s=0;
        s1=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++){
            s+=a[j]/30*10+10;
            s1+=a[j]/60*15+15;
        }
        if(s<s1)printf("Case %d: Mile %d\n",i,s);
        else if(s>s1)printf("Case %d: Juice %d\n",i,s1);
        else if(s==s1)printf("Case %d: Mile Juice %d\n",i,s);
    }
    return 0;
}
