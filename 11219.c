#include<stdio.h>

int main(){
    int t,i,d1,m1,y1,d2,m2,y2,d,m,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        if(d1>=d2){
            d=d1-d2;
        }
        else {d=d1+30-d2;m2++;}
        if(m1>=m2)m=m1-m2;
        else{m=12+m1-m2;y2++;}
        if(y1>=y2)y=y1-y2;
        else{ printf("Case #%d: Invalid birth date\n",i);continue;}
        if(y>130)printf("Case #%d: Check birth date\n",i);
        else printf("Case #%d: %d\n",i,y);
    }
    return 0;
}
