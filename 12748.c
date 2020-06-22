#include<stdio.h>
#include<math.h>

int main(){
    long long t,n,y,rx[100],ry[100],j,a,b,i,z=0,p,x,y1;
    double d,r[100],r1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n,&y);
        for(i=0;i<n;i++){
            scanf("%lld %lld %lf",&x,&y1,&r1);
            rx[i]=x;ry[i]=y1;r[i]=r1;
        }
        printf("Case %lld:\n",++z);
        for(i=0;i<y;i++){
            scanf("%lld %lld",&a,&b);
            p=0;
            for(j=0;j<n;j++){
                d=sqrt((a-rx[j])*(a-rx[j])+(b-ry[j])*(b-ry[j]));
                if(d<=r[j]){
                    printf("Yes\n");
                    p=1;
                    break;
                }
            }
            if(p==0)printf("No\n");
        }
    }
    return 0;
}
